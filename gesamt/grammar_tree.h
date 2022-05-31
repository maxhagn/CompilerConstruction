#ifndef CODE
typedef struct burm_state *STATEPTR_TYPE;
#endif

#ifndef __GRAMMAR_TREE_H__
#define __GRAMMAR_TREE_H__

#include <stdlib.h>
#include <stdio.h>

#include "helper.h"

typedef enum {
    OP_IF = 0,
    OP_GOTO = 1,
    OP_RETURN = 2,
    OP_READ_ARRAY = 3,
    OP_WRITE_ARRAY = 4,
    OP_NOT = 5,
    OP_NEG = 6,
    OP_ADD = 7,
    OP_MUL = 8,
    OP_AND = 9,
    OP_GREATER = 10,
    OP_EQUAL = 11,
    OP_NUMBER = 12,
    OP_ID = 13,
    OP_TERM = 14,
    OP_LEVEL_ONE = 15,
    OP_WRITE_HEAP = 16,
    OP_EMPTY = 17,
    OP_FUNCTION_CALL = 18,
    OP_WRITE_PARAM = 19
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

TreeNode *newLabelTreeNode(char *);

TreeNode *newVariableTreeNode(char *, int);

TreeNode *newLevelOneTreeNode(char *, TreeNode *, long);

TreeNode *newFunctionCallTreeNode(char *, TreeNode *, long);

TreeNode *newEmptyTreeNode();

TreeNode *newWriteParamTreeNode(TreeNode *, TreeNode *, char *);

TreeNode *newWriteHeapTreeNode(TreeNode *, TreeNode *, long);

void compileError(char *, ...);

#endif