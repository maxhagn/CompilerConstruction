#ifndef __SYMBOL_LIST_H__
#define __SYMBOL_LIST_H__

#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "helper.h"

typedef struct ListNode {
    char *name;
    short type;
    int line;
    struct ListNode *next;
} ListNode;

ListNode *newListNode();

ListNode *add(ListNode *, char *, short, int);

ListNode *merge(int, ...);

void isVisible(ListNode *, char *, char *, short, int);

short getType(ListNode *, char *);

int getOffset(ListNode *, char *);

int getIndex(ListNode *, char *);

#endif