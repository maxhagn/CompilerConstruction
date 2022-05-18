#include "grammar_tree.h"

TreeNode *newTreeNode(operators_t op, TreeNode *left, TreeNode *right) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));

    node->op = op;
    node->kids[0] = left;
    node->kids[1] = right;
    node->name = (char *) NULL;

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

void compileError(char *message, ...) {
    printColoredMessage(COMPILE);
    printf("%s", message);
    exit(3);
}
