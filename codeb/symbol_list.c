#include "symbol_list.h"

ListNode *newListNode() {
    return (ListNode *) NULL;
}

ListNode *add(ListNode *head, char *name, short type, int line) {

    ListNode *newNode = (ListNode *) malloc(sizeof(ListNode));
    newNode->name = name;
    newNode->type = type;
    newNode->line = line;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return head;
    }

    ListNode *nextNode = head;
    while (nextNode != NULL) {

        if (strcmp(nextNode->name, name) == 0) {

            printColoredMessage(REDEFINITION);
            printf("redefinition of %s '%s' \n "
                   "%s '%s' redefined at line %d \n "
                   "%s '%s' previously defined at line %d\n",
                   identifierTypeToString(type), name,
                   identifierTypeToString(type), name, line,
                   identifierTypeToString(nextNode->type), nextNode->name, nextNode->line);
            exit(3);
        }


        if (nextNode->next == NULL) {
            nextNode->next = newNode;
            return head;
        }
        nextNode = nextNode->next;
    }

    return head;
}

ListNode *merge(int arg_count, ...) {

    va_list arg;
    va_start(arg, arg_count);
    ListNode *mergedList = newListNode();

    for (int i = 0; i < arg_count; i++) {
        ListNode *nextNode = va_arg(arg, ListNode * );
        while (nextNode != NULL) {
            mergedList = add(mergedList, nextNode->name, nextNode->type, nextNode->line);
            nextNode = nextNode->next;
        }
        free(nextNode);
    }

    return mergedList;
}

void isVisible(ListNode *head, char *name, short type, int line) {

    ListNode *nextNode = head;

    while (nextNode != NULL) {

        if (strcmp(nextNode->name, name) == 0) {

            switch (type) {

                case VARIABLE:
                    if (nextNode->type == VARIABLE || nextNode->type == PARAMETER ||
                        nextNode->type == PARAMETER_POINTER) { return; }
                    break;
                case LABEL:
                    if (nextNode->type == LABEL) { return; }
                    break;
                case PARAMETER:
                    if (nextNode->type == VARIABLE || nextNode->type == PARAMETER ||
                        nextNode->type == PARAMETER_POINTER) { return; }
                    break;
                case PARAMETER_POINTER:
                    if (nextNode->type == VARIABLE || nextNode->type == PARAMETER ||
                        nextNode->type == PARAMETER_POINTER) { return; }
                    break;

            }
        }

        nextNode = nextNode->next;
    }

    printColoredMessage(UNDECLARED);
    printf("use of undeclared %s '%s' at line %d\n",
           identifierTypeToString(type),
           name,
           line);
    exit(3);
}

short getType(ListNode *list, char *name) {
    ListNode *nextNode = list;
    while (nextNode != NULL) {
        if (strcmp(nextNode->name, name) == 0) {
            if (nextNode->type == PARAMETER) {
                return PARAMETER;
            } else if (nextNode->type == PARAMETER_POINTER) {
                return PARAMETER_POINTER;
            }
        }
        nextNode = nextNode->next;
    }
    return -1;
}

int getOffset(ListNode *list, char *name) {
    ListNode *nextNode = list;
    int offset = 8;
    while (nextNode != NULL) {

        if (strcmp(nextNode->name, name) == 0) {
            if (nextNode->type == PARAMETER_POINTER) {
                if (strcmp(nextNode->name, name) == 0) {
                    return offset;
                }
            }
        }

        if (nextNode->type == PARAMETER_POINTER) {
            offset += 8;
        }
        nextNode = nextNode->next;
    }
    return 0;
}

int getVariableOffset(ListNode *list, char *name) {
    ListNode *nextNode = list;
    int offset = 0;
    while (nextNode != NULL) {

        if (strcmp(nextNode->name, name) == 0) {
            if (nextNode->type == VARIABLE) {
                if (strcmp(nextNode->name, name) == 0) {
                    return offset;
                }
            }
        }

        if (nextNode->type == VARIABLE) {
            offset += 1;
        }
        nextNode = nextNode->next;
    }
    return 0;
}

int getIndex(ListNode *list, char *name) {

    ListNode *nextNode = list;
    int index = 0;
    short type = getType(list, name);

    while (nextNode != NULL) {

        if (type == PARAMETER_POINTER && nextNode->type == PARAMETER_POINTER) {
            return index;
        } else if (type == PARAMETER && nextNode->type == PARAMETER) {
            if (strcmp(nextNode->name, name) == 0) {
                return index;
            }
        }

        if (nextNode->type == PARAMETER || nextNode->type == PARAMETER_POINTER) {
            index++;
        }


        nextNode = nextNode->next;
    }

    return -1;
}