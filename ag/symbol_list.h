#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "helper.h"

typedef struct ListNode {
    char  *name;
    short  type;
    int    line;
    struct ListNode *next;
} ListNode;

ListNode* newListNode();
ListNode* add(ListNode*, char*, short, int);
ListNode* merge(ListNode*, ListNode*);
void isVisible(ListNode*, char*, short, int);