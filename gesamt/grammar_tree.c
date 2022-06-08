#include "grammar_tree.h"

TreeNode *newTreeNode(operators_t op, TreeNode *left, TreeNode *right) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));

    node->op = op;
    node->kids[0] = left;
    node->kids[1] = right;
    node->name = (char *) NULL;

    return node;
}

TreeNode *newEmptyTreeNode() {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));

    node->op = OP_EMPTY;
    node->kids[0] = (TreeNode *) NULL;
    node->kids[1] = (TreeNode *) NULL;

    return node;
}


TreeNode *newNamedTreeNode(operators_t op, char *name, TreeNode *left, TreeNode *right) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));

    node->op = op;
    node->kids[0] = left;
    node->kids[1] = right;
    node->name = name;

    return node;
}

TreeNode *newRegisterTreeNode(char *name, int index, int offset) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));

    node->op = OP_ID;
    node->kids[0] = (TreeNode *) NULL;
    node->kids[1] = (TreeNode *) NULL;
    node->offset = offset;
    node->name = name;
    node->index = index;

    return node;
}

TreeNode *newNumberTreeNode(long value) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));

    node->op = OP_NUMBER;
    node->kids[0] = (TreeNode *) NULL;
    node->kids[1] = (TreeNode *) NULL;
    node->value = value;

    return node;
}

TreeNode *newLabelTreeNode(char *name) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));

    node->op = OP_ID;
    node->kids[0] = (TreeNode *) NULL;
    node->kids[1] = (TreeNode *) NULL;
    node->name = name;
    node->index = -1;

    return node;
}

TreeNode *newLevelOneTreeNode(char *name, TreeNode *left, long offset) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));

    node->op = OP_LEVEL_ONE;
    node->kids[0] = left;
    node->kids[1] = (TreeNode *) NULL;
    node->name = name;
    node->index = -1;
    node->offset = offset;

    return node;
}

TreeNode *newLevelTwoTreeNode(TreeNode *left, TreeNode *right, long offset) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));

    node->op = OP_LEVEL_TWO;
    node->kids[0] = left;
    node->kids[1] = right;
    node->index = -1;
    node->offset = offset;

    return node;
}

TreeNode *newFunctionCallTreeNode(char *name, TreeNode *left, long offset) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));

    node->op = OP_FUNCTION_CALL;
    node->kids[0] = left;
    node->kids[1] = (TreeNode *) NULL;
    node->name = name;
    node->index = -1;
    node->offset = offset;

    return node;
}

TreeNode *newWriteParamTreeNode(TreeNode *left, TreeNode *right, char * name, long offset) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));

    node->op = OP_WRITE_PARAM;
    node->kids[0] = left;
    node->kids[1] = right;
    node->name = name;
    node->offset = offset;
    node->index = -1;

    return node;
}

TreeNode *newWriteHeapTreeNode(TreeNode *left, TreeNode *right, long offset) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));

    node->op = OP_WRITE_HEAP;
    node->kids[0] = left;
    node->kids[1] = right;
    node->index = -1;
    node->offset = offset;

    return node;
}

TreeNode *newWriteLevelTwoTreeNode(TreeNode *left, TreeNode *right, long offset) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));

    node->op = OP_WRITE_LEVEL_TWO;
    node->kids[0] = left;
    node->kids[1] = right;
    node->index = -1;
    node->offset = offset;

    return node;
}

TreeNode *newVariableTreeNode(char *name, int offset) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));

    node->op = OP_ID;
    node->kids[0] = (TreeNode *) NULL;
    node->kids[1] = (TreeNode *) NULL;
    node->name = name;
    node->index = -1;
    node->offset = offset;

    return node;
}

void compileError(char *message, ...) {
    printColoredMessage(COMPILE);
    printf("%s", message);
    exit(3);
}
