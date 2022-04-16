#include "symbol_table.h"

void checkForError(Node *node, char *name, short type, int lineNr) {

    if (strcmp(node->name, name) == 0) {
        fprintf(stderr, "Identifier '%s' on line %d conflicts with identifier on line %d\n",
                name, lineNr, node->lineNr);
        exit(3);
    }

    return;
}

Node *newList() {
    return (Node *) NULL;
}

Node *add(Node *list, char *name, short type, int lineNr) {

    if (list == NULL) {
        list = (Node *) malloc(sizeof(Node));
        list->name = name;
        list->type = type;
        list->lineNr = lineNr;
        list->next = NULL;
        return list;
    }

    checkForError(list, name, type, lineNr);

    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->name = name;
    newNode->type = type;
    newNode->lineNr = lineNr;
    newNode->next = NULL;

    if (list->next == NULL) {
        list->next = newNode;

        return list;
    }

    Node *nextNode = list->next;

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

Node *merge(Node *head_A, Node *head_B) {

    Node *mergedList = newList();

    Node *nextNode = head_A;
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

void isVisible(Node *head, char *name, short type, int lineNr) {

    Node *nextNode = head;

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

int getParameterIndex(Node * list,  char *name) {

    Node *nextNode = list;

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

