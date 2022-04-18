#ifndef CODE
typedef struct burm_state *STATEPTR_TYPE; 
#endif

typedef enum  {
    OP_RETURN = 0,
    OP_ADDRESS_READ,
    OP_ADD,
    OP_MUL,
    OP_AND,
    OP_GREATER,
    OP_EQUAL,
    OP_NOT,
    OP_SUB,
    OP_NUMBER,
    OP_ID
} operators_t;

typedef struct TreeNode
{
    int op;
    struct TreeNode *kids[2];
    STATEPTR_TYPE state;

    char *identifierName;
    long value;

    int parameterIndex;
    char *regStor;
} TreeNode;

typedef TreeNode *NODEPTR_TYPE;

#define OP_LABEL(p)     ((p)->op)
#define LEFT_CHILD(p)   ((p)->kids[0])
#define RIGHT_CHILD(p)  ((p)->kids[1])
#define STATE_LABEL(p)  ((p)->state)
#define PANIC           printf

TreeNode *newTreeNode(operators_t op, TreeNode *left, TreeNode *right);
TreeNode *newRegisterTreeNode(char *name, int parameterIndex);
TreeNode *newNumberTreeNode(long value);

