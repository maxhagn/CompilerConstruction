#include "symbol_list.h"

void checkForError(ListNode *node, char *name, short type, int lineNr) {

    if (strcmp(node->name, name) == 0) {
        fprintf(stderr, "Identifier '%s' on line %d conflicts with identifier on line %d\n",
                name, lineNr, node->lineNr);
        exit(3);
    }

    return;
}

ListNode *newListNode() {
    return (ListNode *) NULL;
}

ListNode *add(ListNode *list, char *name, short type, int lineNr) {

    if (list == NULL) {
        list = (ListNode *) malloc(sizeof(ListNode));
        list->name = name;
        list->type = type;
        list->lineNr = lineNr;
        list->next = NULL;
        return list;
    }

    checkForError(list, name, type, lineNr);

    ListNode *newNode = (ListNode *) malloc(sizeof(ListNode));
    newNode->name = name;
    newNode->type = type;
    newNode->lineNr = lineNr;
    newNode->next = NULL;

    if (list->next == NULL) {
        list->next = newNode;

        return list;
    }

    ListNode *nextNode = list->next;

    while (true) {
        checkForError(nextNode, name, type, lineNr);

        if (nextNode->next != NULL) {
            nextNode = nextNode->next;
        } else {
            break;
        }
    }

    nextNode->next = newNode;

    return list;
}

ListNode *merge(ListNode *head_A, ListNode *head_B) {

    ListNode *mergedList = newListNode();

    ListNode *nextNode = head_A;
    while (nextNode != NULL) {
        mergedList = add(mergedList, nextNode->name, nextNode->type, nextNode->lineNr);
        nextNode = nextNode->next;
    }

    nextNode = head_B;
    while (nextNode != NULL) {
        mergedList = add(mergedList, nextNode->name, nextNode->type, nextNode->lineNr);
        nextNode = nextNode->next;
    }

    return mergedList;
}

short adjustType(short inputType) {
    if (inputType == PARAMETER) {
        return VARIABLE;
    }

    return inputType;
}

void isVisible(ListNode *head, char *name, short type, int lineNr) {

    ListNode *nextNode = head;

    while (nextNode != NULL) {
        if (adjustType(nextNode->type) == type
            && strcmp(nextNode->name, name) == 0) {
            return;
        }

        nextNode = nextNode->next;
    }

    fprintf(stderr, "Identifier with name '%s' on line %d is not visible in the current scope\n",
            name, lineNr);
    exit(3);
}

int getParameterIndex(ListNode * list,  char *name) {

    ListNode *nextNode = list;

    int index = 0;

    while (nextNode != NULL) {
        if (nextNode->type == PARAMETER) {

            if (strcmp(nextNode->name, name) == 0) {
                return index;
            }

            index++;
        }

        nextNode = nextNode->next;
    }

    return -1;
}

