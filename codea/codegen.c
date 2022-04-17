typedef struct burm_state *STATEPTR_TYPE;

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "tree.h"
#include "code_generator.h"
#ifndef ALLOC
#define ALLOC(n) malloc(n)
#endif

#ifndef burm_assert
#define burm_assert(x,y) if (!(x)) { extern void abort(void); y; abort(); }
#endif

#define burm_stat_NT 1
#define burm_ret_NT 2
#define burm_expr_NT 3
#define burm_const_NT 4
int burm_max_nt = 4;

struct burm_state {
	int op;
	STATEPTR_TYPE left, right;
	short cost[5];
	struct {
		unsigned burm_stat:1;
		unsigned burm_ret:1;
		unsigned burm_expr:5;
		unsigned burm_const:4;
	} rule;
};

static short burm_nts_0[] = { burm_ret_NT, 0 };
static short burm_nts_1[] = { burm_expr_NT, 0 };
static short burm_nts_2[] = { burm_const_NT, 0 };
static short burm_nts_3[] = { burm_expr_NT, burm_expr_NT, 0 };
static short burm_nts_4[] = { burm_const_NT, burm_expr_NT, 0 };
static short burm_nts_5[] = { burm_expr_NT, burm_const_NT, 0 };
static short burm_nts_6[] = { 0 };
static short burm_nts_7[] = { burm_const_NT, burm_const_NT, 0 };

short *burm_nts[] = {
	0,	/* 0 */
	burm_nts_0,	/* 1 */
	burm_nts_1,	/* 2 */
	burm_nts_2,	/* 3 */
	burm_nts_1,	/* 4 */
	burm_nts_3,	/* 5 */
	burm_nts_4,	/* 6 */
	burm_nts_5,	/* 7 */
	burm_nts_3,	/* 8 */
	burm_nts_4,	/* 9 */
	burm_nts_5,	/* 10 */
	burm_nts_3,	/* 11 */
	burm_nts_4,	/* 12 */
	burm_nts_5,	/* 13 */
	burm_nts_3,	/* 14 */
	burm_nts_5,	/* 15 */
	burm_nts_3,	/* 16 */
	burm_nts_4,	/* 17 */
	burm_nts_5,	/* 18 */
	burm_nts_1,	/* 19 */
	burm_nts_1,	/* 20 */
	burm_nts_6,	/* 21 */
	burm_nts_6,	/* 22 */
	burm_nts_7,	/* 23 */
	burm_nts_7,	/* 24 */
	burm_nts_7,	/* 25 */
	burm_nts_7,	/* 26 */
	burm_nts_7,	/* 27 */
	burm_nts_2,	/* 28 */
	burm_nts_2,	/* 29 */
};

char burm_arity[] = {
	1,	/* 0=OP_RETURN */
	1,	/* 1=OP_ADDRESS_READ */
	2,	/* 2=OP_ADD */
	2,	/* 3=OP_MUL */
	2,	/* 4=OP_AND */
	2,	/* 5=OP_LESS_EQUAL */
	2,	/* 6=OP_NOT_EQUAL */
	1,	/* 7=OP_NOT */
	1,	/* 8=OP_MINUS */
	0,	/* 9=OP_NUMBER */
	0,	/* 10=OP_ID */
};

static short burm_decode_stat[] = {
	0,
	1,
};

static short burm_decode_ret[] = {
	0,
	2,
};

static short burm_decode_expr[] = {
	0,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
};

static short burm_decode_const[] = {
	0,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
};

int burm_rule(STATEPTR_TYPE state, int goalnt) {
	burm_assert(goalnt >= 1 && goalnt <= 4, PANIC("Bad goal nonterminal %d in burm_rule\n", goalnt));
	if (!state)
		return 0;
	switch (goalnt) {
	case burm_stat_NT:
		return burm_decode_stat[state->rule.burm_stat];
	case burm_ret_NT:
		return burm_decode_ret[state->rule.burm_ret];
	case burm_expr_NT:
		return burm_decode_expr[state->rule.burm_expr];
	case burm_const_NT:
		return burm_decode_const[state->rule.burm_const];
	default:
		burm_assert(0, PANIC("Bad goal nonterminal %d in burm_rule\n", goalnt));
	}
	return 0;
}

static void burm_closure_ret(STATEPTR_TYPE, int);
static void burm_closure_const(STATEPTR_TYPE, int);

static void burm_closure_ret(STATEPTR_TYPE p, int c) {
	if (c + 0 < p->cost[burm_stat_NT]) {
		p->cost[burm_stat_NT] = c + 0;
		p->rule.burm_stat = 1;
	}
}

static void burm_closure_const(STATEPTR_TYPE p, int c) {
	if (c + 1 < p->cost[burm_expr_NT]) {
		p->cost[burm_expr_NT] = c + 1;
		p->rule.burm_expr = 1;
	}
}

STATEPTR_TYPE burm_state(int op, STATEPTR_TYPE left, STATEPTR_TYPE right) {
	int c;
	STATEPTR_TYPE p, l = left, r = right;

	if (burm_arity[op] > 0) {
		p = (STATEPTR_TYPE)ALLOC(sizeof *p);
		burm_assert(p, PANIC("ALLOC returned NULL in burm_state\n"));
		p->op = op;
		p->left = l;
		p->right = r;
		p->rule.burm_stat = 0;
		p->cost[1] =
		p->cost[2] =
		p->cost[3] =
		p->cost[4] =
			32767;
	}
	switch (op) {
	case 0: /* OP_RETURN */
		assert(l);
		{	/* ret: OP_RETURN(expr) */
			c = l->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_ret_NT]) {
				p->cost[burm_ret_NT] = c + 0;
				p->rule.burm_ret = 1;
				burm_closure_ret(p, c + 0);
			}
		}
		break;
	case 1: /* OP_ADDRESS_READ */
		assert(l);
		{	/* expr: OP_ADDRESS_READ(expr) */
			c = l->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 2;
			}
		}
		break;
	case 2: /* OP_ADD */
		assert(l && r);
		{	/* const: OP_ADD(const,const) */
			c = l->cost[burm_const_NT] + r->cost[burm_const_NT] + 0;
			if (c + 0 < p->cost[burm_const_NT]) {
				p->cost[burm_const_NT] = c + 0;
				p->rule.burm_const = 2;
				burm_closure_const(p, c + 0);
			}
		}
		{	/* expr: OP_ADD(expr,const) */
			c = l->cost[burm_expr_NT] + r->cost[burm_const_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 5;
			}
		}
		{	/* expr: OP_ADD(const,expr) */
			c = l->cost[burm_const_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 4;
			}
		}
		{	/* expr: OP_ADD(expr,expr) */
			c = l->cost[burm_expr_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 3;
			}
		}
		break;
	case 3: /* OP_MUL */
		assert(l && r);
		{	/* const: OP_MUL(const,const) */
			c = l->cost[burm_const_NT] + r->cost[burm_const_NT] + 0;
			if (c + 0 < p->cost[burm_const_NT]) {
				p->cost[burm_const_NT] = c + 0;
				p->rule.burm_const = 3;
				burm_closure_const(p, c + 0);
			}
		}
		{	/* expr: OP_MUL(expr,const) */
			c = l->cost[burm_expr_NT] + r->cost[burm_const_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 8;
			}
		}
		{	/* expr: OP_MUL(const,expr) */
			c = l->cost[burm_const_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 7;
			}
		}
		{	/* expr: OP_MUL(expr,expr) */
			c = l->cost[burm_expr_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 6;
			}
		}
		break;
	case 4: /* OP_AND */
		assert(l && r);
		{	/* const: OP_AND(const,const) */
			c = l->cost[burm_const_NT] + r->cost[burm_const_NT] + 0;
			if (c + 0 < p->cost[burm_const_NT]) {
				p->cost[burm_const_NT] = c + 0;
				p->rule.burm_const = 4;
				burm_closure_const(p, c + 0);
			}
		}
		{	/* expr: OP_AND(expr,const) */
			c = l->cost[burm_expr_NT] + r->cost[burm_const_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 11;
			}
		}
		{	/* expr: OP_AND(const,expr) */
			c = l->cost[burm_const_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 10;
			}
		}
		{	/* expr: OP_AND(expr,expr) */
			c = l->cost[burm_expr_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 9;
			}
		}
		break;
	case 5: /* OP_LESS_EQUAL */
		assert(l && r);
		{	/* const: OP_LESS_EQUAL(const,const) */
			c = l->cost[burm_const_NT] + r->cost[burm_const_NT] + 0;
			if (c + 0 < p->cost[burm_const_NT]) {
				p->cost[burm_const_NT] = c + 0;
				p->rule.burm_const = 5;
				burm_closure_const(p, c + 0);
			}
		}
		{	/* expr: OP_LESS_EQUAL(expr,const) */
			c = l->cost[burm_expr_NT] + r->cost[burm_const_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 13;
			}
		}
		{	/* expr: OP_LESS_EQUAL(expr,expr) */
			c = l->cost[burm_expr_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 12;
			}
		}
		break;
	case 6: /* OP_NOT_EQUAL */
		assert(l && r);
		{	/* const: OP_NOT_EQUAL(const,const) */
			c = l->cost[burm_const_NT] + r->cost[burm_const_NT] + 0;
			if (c + 0 < p->cost[burm_const_NT]) {
				p->cost[burm_const_NT] = c + 0;
				p->rule.burm_const = 6;
				burm_closure_const(p, c + 0);
			}
		}
		{	/* expr: OP_NOT_EQUAL(expr,const) */
			c = l->cost[burm_expr_NT] + r->cost[burm_const_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 16;
			}
		}
		{	/* expr: OP_NOT_EQUAL(const,expr) */
			c = l->cost[burm_const_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 15;
			}
		}
		{	/* expr: OP_NOT_EQUAL(expr,expr) */
			c = l->cost[burm_expr_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 14;
			}
		}
		break;
	case 7: /* OP_NOT */
		assert(l);
		{	/* const: OP_NOT(const) */
			c = l->cost[burm_const_NT] + 0;
			if (c + 0 < p->cost[burm_const_NT]) {
				p->cost[burm_const_NT] = c + 0;
				p->rule.burm_const = 7;
				burm_closure_const(p, c + 0);
			}
		}
		{	/* expr: OP_NOT(expr) */
			c = l->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 17;
			}
		}
		break;
	case 8: /* OP_MINUS */
		assert(l);
		{	/* const: OP_MINUS(const) */
			c = l->cost[burm_const_NT] + 0;
			if (c + 0 < p->cost[burm_const_NT]) {
				p->cost[burm_const_NT] = c + 0;
				p->rule.burm_const = 8;
				burm_closure_const(p, c + 0);
			}
		}
		{	/* expr: OP_MINUS(expr) */
			c = l->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 18;
			}
		}
		break;
	case 9: /* OP_NUMBER */
		{
			static struct burm_state z = { 9, 0, 0,
				{	0,
					32767,
					32767,
					1,	/* expr: const */
					0,	/* const: OP_NUMBER */
				},{
					0,
					0,
					1,	/* expr: const */
					1,	/* const: OP_NUMBER */
				}
			};
			return &z;
		}
	case 10: /* OP_ID */
		{
			static struct burm_state z = { 10, 0, 0,
				{	0,
					32767,
					32767,
					1,	/* expr: OP_ID */
					32767,
				},{
					0,
					0,
					19,	/* expr: OP_ID */
					0,
				}
			};
			return &z;
		}
	default:
		burm_assert(0, PANIC("Bad operator %d in burm_state\n", op));
	}
	return p;
}

#ifdef STATE_LABEL
static void burm_label1(NODEPTR_TYPE p) {
	burm_assert(p, PANIC("NULL tree in burm_label\n"));
	switch (burm_arity[OP_LABEL(p)]) {
	case 0:
		STATE_LABEL(p) = burm_state(OP_LABEL(p), 0, 0);
		break;
	case 1:
		burm_label1(LEFT_CHILD(p));
		STATE_LABEL(p) = burm_state(OP_LABEL(p),
			STATE_LABEL(LEFT_CHILD(p)), 0);
		break;
	case 2:
		burm_label1(LEFT_CHILD(p));
		burm_label1(RIGHT_CHILD(p));
		STATE_LABEL(p) = burm_state(OP_LABEL(p),
			STATE_LABEL(LEFT_CHILD(p)),
			STATE_LABEL(RIGHT_CHILD(p)));
		break;
	}
}

STATEPTR_TYPE burm_label(NODEPTR_TYPE p) {
	burm_label1(p);
	return STATE_LABEL(p)->rule.burm_stat ? STATE_LABEL(p) : 0;
}

NODEPTR_TYPE *burm_kids(NODEPTR_TYPE p, int eruleno, NODEPTR_TYPE kids[]) {
	burm_assert(p, PANIC("NULL tree in burm_kids\n"));
	burm_assert(kids, PANIC("NULL kids in burm_kids\n"));
	switch (eruleno) {
	case 3: /* expr: const */
	case 1: /* stat: ret */
		kids[0] = p;
		break;
	case 29: /* const: OP_MINUS(const) */
	case 28: /* const: OP_NOT(const) */
	case 20: /* expr: OP_MINUS(expr) */
	case 19: /* expr: OP_NOT(expr) */
	case 4: /* expr: OP_ADDRESS_READ(expr) */
	case 2: /* ret: OP_RETURN(expr) */
		kids[0] = LEFT_CHILD(p);
		break;
	case 27: /* const: OP_NOT_EQUAL(const,const) */
	case 26: /* const: OP_LESS_EQUAL(const,const) */
	case 25: /* const: OP_AND(const,const) */
	case 24: /* const: OP_MUL(const,const) */
	case 23: /* const: OP_ADD(const,const) */
	case 18: /* expr: OP_NOT_EQUAL(expr,const) */
	case 17: /* expr: OP_NOT_EQUAL(const,expr) */
	case 16: /* expr: OP_NOT_EQUAL(expr,expr) */
	case 15: /* expr: OP_LESS_EQUAL(expr,const) */
	case 14: /* expr: OP_LESS_EQUAL(expr,expr) */
	case 13: /* expr: OP_AND(expr,const) */
	case 12: /* expr: OP_AND(const,expr) */
	case 11: /* expr: OP_AND(expr,expr) */
	case 10: /* expr: OP_MUL(expr,const) */
	case 9: /* expr: OP_MUL(const,expr) */
	case 8: /* expr: OP_MUL(expr,expr) */
	case 7: /* expr: OP_ADD(expr,const) */
	case 6: /* expr: OP_ADD(const,expr) */
	case 5: /* expr: OP_ADD(expr,expr) */
		kids[0] = LEFT_CHILD(p);
		kids[1] = RIGHT_CHILD(p);
		break;
	case 22: /* const: OP_NUMBER */
	case 21: /* expr: OP_ID */
		break;
	default:
		burm_assert(0, PANIC("Bad external rule number %d in burm_kids\n", eruleno));
	}
	return kids;
}

int burm_op_label(NODEPTR_TYPE p) {
	burm_assert(p, PANIC("NULL tree in burm_op_label\n"));
	return OP_LABEL(p);
}

STATEPTR_TYPE burm_state_label(NODEPTR_TYPE p) {
	burm_assert(p, PANIC("NULL tree in burm_state_label\n"));
	return STATE_LABEL(p);
}

NODEPTR_TYPE burm_child(NODEPTR_TYPE p, int index) {
	burm_assert(p, PANIC("NULL tree in burm_child\n"));
	switch (index) {
	case 0:	return LEFT_CHILD(p);
	case 1:	return RIGHT_CHILD(p);
	}
	burm_assert(0, PANIC("Bad index %d in burm_child\n", index));
	return 0;
}

#endif

extern tree_t *root;
extern int yyparse(void);
void burm_reduce(NODEPTR_TYPE bnode, int goalnt);

void invoke_burm(NODEPTR_TYPE root) {
    burm_label(root);
    burm_reduce(root, 1);
}

void burm_reduce(NODEPTR_TYPE bnode, int goalnt)
{
  int ruleNo = burm_rule (STATE_LABEL(bnode), goalnt);
  short *nts = burm_nts[ruleNo];
  NODEPTR_TYPE kids[100];
  int i;

  if (ruleNo==0) {
    fprintf(stderr, "tree cannot be derived from start symbol");
    exit(1);
  }
  burm_kids (bnode, ruleNo, kids);
  for (i = 0; nts[i]; i++)
    burm_reduce (kids[i], nts[i]);    /* reduce kids */

#if DEBUG
  printf ("%s", burm_string[ruleNo]);  /* display rule */
#endif

  switch (ruleNo) {
  case 1:

    break;
  case 2:
   writeReturnWithValue(bnode->regStor);
    break;
  case 3:
   writeMovev(bnode->value, bnode->regStor);
    break;
  case 4:
   writeAddressRead(bnode->kids[0]->regStor, bnode->regStor);  
    break;
  case 5:
   writeAdd(bnode->kids[1]->regStor, bnode->kids[0]->regStor);
    break;
  case 6:
   writeAddv(bnode->kids[0]->value, bnode->kids[1]->regStor); writeMove(bnode->kids[1]->regStor, bnode->regStor); 
    break;
  case 7:
   writeAddv(bnode->kids[1]->value, bnode->kids[0]->regStor);
    break;
  case 8:
   writeMul(bnode->kids[1]->regStor, bnode->kids[0]->regStor);
    break;
  case 9:
   writeMulv(bnode->kids[0]->value, bnode->kids[1]->regStor); writeMove(bnode->kids[1]->regStor, bnode->regStor);
    break;
  case 10:
   writeMulv(bnode->kids[1]->value, bnode->kids[0]->regStor);
    break;
  case 11:
   writeAnd(bnode->kids[1]->regStor, bnode->kids[0]->regStor);
    break;
  case 12:
   writeAndv(bnode->kids[0]->value, bnode->kids[1]->regStor); writeMove(bnode->kids[1]->regStor, bnode->regStor); 
    break;
  case 13:
   writeAndv(bnode->kids[1]->value, bnode->kids[0]->regStor);
    break;
  case 14:
   writeLessEqual(bnode->kids[1]->regStor, bnode->kids[0]->regStor, bnode->regStor); 
    break;
  case 15:
   writeLessEqualFv(bnode->kids[1]->value, bnode->kids[0]->regStor, bnode->regStor);
    break;
  case 16:
   writeNotEqual(bnode->kids[1]->regStor, bnode->kids[0]->regStor, bnode->regStor);
    break;
  case 17:
   writeNotEqualv(bnode->kids[0]->value, bnode->kids[1]->regStor, bnode->regStor); 
    break;
  case 18:
   writeNotEqualv(bnode->kids[1]->value, bnode->kids[0]->regStor, bnode->regStor);
    break;
  case 19:
   writeNot(bnode->regStor); 
    break;
  case 20:
   writeNeg(bnode->regStor); 
    break;
  case 21:
   if (bnode->parameterIndex != -1) writeMove(getParameterRegister(bnode->parameterIndex), bnode->regStor);   
    break;
  case 22:

    break;
  case 23:
   bnode->value = bnode->kids[0]->value + bnode->kids[1]->value;
    break;
  case 24:
   bnode->value = bnode->kids[0]->value * bnode->kids[1]->value;
    break;
  case 25:
   bnode->value = bnode->kids[0]->value & bnode->kids[1]->value;
    break;
  case 26:
   bnode->value = bnode->kids[0]->value <= bnode->kids[1]->value ? -1 : 0;
    break;
  case 27:
   bnode->value = bnode->kids[0]->value != bnode->kids[1]->value ? -1 : 0;
    break;
  case 28:
   bnode->value = ~bnode->kids[0]->value;
    break;
  case 29:
   bnode->value = -bnode->kids[0]->value;
    break;
  default:    assert (0);
  }
}
