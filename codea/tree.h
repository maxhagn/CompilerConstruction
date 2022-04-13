#ifndef CODE
typedef struct burm_state *STATEPTR_TYPE; 
#endif

typedef enum  {
    OP_RETURN = 0,
    OP_ADDRESS_READ,
    OP_ADD,
    OP_MUL,
    OP_AND,
    OP_LESS_EQUAL,
    OP_NOT_EQUAL,
    OP_NOT,
    OP_MINUS,
    OP_NUMBER,
    OP_ID
} operators_t;

typedef struct tree_t
{
    int op;
    struct tree_t *kids[2];
    STATEPTR_TYPE state;

    char *identifierName;
    long value;

    int parameterIndex;
    char *regStor;
} tree_t;

typedef tree_t *NODEPTR_TYPE;

#define OP_LABEL(p) ((p)->op)
#define LEFT_CHILD(p) ((p)->kids[0])
#define RIGHT_CHILD(p) ((p)->kids[1])
#define STATE_LABEL(p) ((p)->state)
#define PANIC printf

tree_t *createNode(operators_t op, tree_t *left, tree_t *right);
tree_t *createIdentifierLeaf(char *name, int parameterIndex);
tree_t *createNumericalLeaf(long value);

