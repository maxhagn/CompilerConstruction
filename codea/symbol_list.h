#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


enum IdentifierType {
    VARIABLE  = 0,
    LABEL     = 1,
    PARAMETER = 2
};

typedef struct ListNode {
    char  *name;
    short  type;
    int    lineNr;
    struct ListNode *next;
} ListNode;


ListNode* newListNode();

ListNode* add(ListNode*, char*, short, int);
ListNode* addDev(ListNode*, char*, short, int, char*);

ListNode* merge(ListNode*, ListNode*);
ListNode* mergeDev(ListNode*, ListNode*, char*);

ListNode* mergeThree(ListNode*, ListNode*, ListNode*);
ListNode* mergeThreeDev(ListNode*, ListNode*, ListNode*, char*);

ListNode* duplicate(ListNode*);

bool      isEmpty(ListNode*);

void isVisible(ListNode*, char*, short, int);
void printItems(ListNode*);

int getParameterIndex(ListNode*, char*);