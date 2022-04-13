#include <stdlib.h>
#include <stdio.h>

#include "tree.h"

tree_t *createNode(operators_t op, tree_t *left, tree_t *right) {
    tree_t *node = (tree_t *) malloc(sizeof(tree_t));

    node->op = op;
    node->kids[0] = left;
    node->kids[1] = right;    
    node->identifierName = (char *) NULL;

    return node;
}

tree_t *createIdentifierLeaf(char *name, int parameterIndex) {
    tree_t *node = (tree_t *) malloc(sizeof(tree_t));

    node->op = OP_ID;
    node->kids[0] = (tree_t *) NULL;
    node->kids[1] = (tree_t *) NULL;    
    node->identifierName = name;
    node->parameterIndex = parameterIndex;

    return node;
}

tree_t *createNumericalLeaf(long value) {
    tree_t *node = (tree_t *) malloc(sizeof(tree_t));

    node->op = OP_NUMBER;
    node->kids[0] = (tree_t *) NULL;
    node->kids[1] = (tree_t *) NULL;    
    node->value = value;

    return node;
}
