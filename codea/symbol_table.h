#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


enum IdentifierType {
    VARIABLE  = 0,
    LABEL     = 1,
    PARAMETER = 2
};

typedef struct Node {
    char  *name;
    short  type;
    int    lineNr;
    struct Node *next;
} Node;


Node* newList();

Node* add(Node*, char*, short, int);
Node* addDev(Node*, char*, short, int, char*);

Node* merge(Node*, Node*);
Node* mergeDev(Node*, Node*, char*);

Node* mergeThree(Node*, Node*, Node*);
Node* mergeThreeDev(Node*, Node*, Node*, char*);

Node* duplicate(Node*);

bool   isEmpty(Node*);

void isVisible(Node*, char*, short, int);
void printItems(Node*);
int getParameterIndex(Node*, char*);