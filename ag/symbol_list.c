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

            setTerminalColorRed();
            printf("%s: ", errorTypeToString(REDEFINITION));
            setTerminalColorDefault();

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

ListNode *merge(ListNode *head_A, ListNode *head_B) {

    ListNode *mergedList = newListNode();

    ListNode *nextNode = head_A;
    while (nextNode != NULL) {
        mergedList = add(mergedList, nextNode->name, nextNode->type, nextNode->line);
        nextNode = nextNode->next;
    }

    nextNode = head_B;
    while (nextNode != NULL) {
        mergedList = add(mergedList, nextNode->name, nextNode->type, nextNode->line);
        nextNode = nextNode->next;
    }

    return mergedList;
}

void isVisible(ListNode *head, char *name, short type, int line) {

    ListNode *nextNode = head;


    while (nextNode != NULL) {

        if (strcmp(nextNode->name, name) == 0) {

            switch (type) {

                case VARIABLE:
                    if (nextNode->type == VARIABLE || nextNode->type == PARAMETER) { return; }
                    break;
                case LABEL:
                    if (nextNode->type == LABEL) { return; }
                    break;
                case PARAMETER:
                    if (nextNode->type == VARIABLE || nextNode->type == PARAMETER) { return; }
                    break;

            }
        }

        nextNode = nextNode->next;
    }

    setTerminalColorRed();
    printf("%s: ", errorTypeToString(UNDECLARED));
    setTerminalColorDefault();

    printf("use of undeclared %s '%s' at line %d\n",
            identifierTypeToString(type),
            name,
            line);
    exit(3);

}