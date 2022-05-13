#ifndef CODE
typedef struct burm_state *STATEPTR_TYPE;
#endif

#ifndef __GRAMMAR_TREE_H__
#define __GRAMMAR_TREE_H__

#include <stdlib.h>
#include <stdio.h>

#include "helper.h"

typedef enum  {
    OP_RETURN     = 0,
    OP_READ_ARRAY = 1,
    OP_NOT        = 2,
    OP_NEG        = 3,
    OP_ADD        = 4,
    OP_MUL        = 5,
    OP_AND        = 6,
    OP_GREATER    = 7,
    OP_EQUAL      = 8,
    OP_NUMBER     = 9,
    OP_ID         = 10
} operators_t;

typedef struct TreeNode
{
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

TreeNode *newTreeNode(operators_t op, TreeNode *left, TreeNode *right);
TreeNode *newRegisterTreeNode(char *name, int index, int offset);
TreeNode *newNumberTreeNode(long value);
void compileError(char* message,...);

#endif