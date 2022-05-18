#ifndef CODE
typedef struct burm_state *STATEPTR_TYPE;
#endif

#ifndef __GRAMMAR_TREE_H__
#define __GRAMMAR_TREE_H__

#include <stdlib.h>
#include <stdio.h>

#include "helper.h"

typedef enum {
    OP_RETURN = 0,
    OP_READ_ARRAY = 1,
    OP_WRITE_ARRAY = 2,
    OP_NOT = 3,
    OP_NEG = 4,
    OP_ADD = 5,
    OP_MUL = 6,
    OP_AND = 7,
    OP_GREATER = 8,
    OP_EQUAL = 9,
    OP_NUMBER = 10,
    OP_ID = 11,
    OP_IF = 12,
    OP_GOTO = 13
} operators_t;

typedef struct TreeNode {
    int op;
    struct TreeNode *kids[2];
    STATEPTR_TYPE state;

    char *name;
    long value;

    int offset;
    int index;

    char *reg;
} TreeNode;

typedef TreeNode *NODEPTR_TYPE;

#define OP_LABEL(p)     ((p)->op)
#define LEFT_CHILD(p)   ((p)->kids[0])
#define RIGHT_CHILD(p)  ((p)->kids[1])
#define STATE_LABEL(p)  ((p)->state)
#define PANIC           compileError

TreeNode *newTreeNode(operators_t, TreeNode *, TreeNode *);

TreeNode *newNamedTreeNode(operators_t, char *, TreeNode *, TreeNode *);

TreeNode *newRegisterTreeNode(char *, int, int);

TreeNode *newNumberTreeNode(long);

TreeNode *newLabelNode(char *);

TreeNode *newVariableNode(char *, int);

void compileError(char *, ...);

#endif