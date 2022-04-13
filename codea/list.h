#include <stdbool.h>

#define VARIABLE 0
#define LABEL 1
#define PARAMETER 2

#define DEBUG 1

typedef struct node_t {
    char  *name;
    short  type;
    int    lineNr;
    struct node_t *next;
} node_t;


node_t* newList();

node_t* add(node_t*, char*, short, int);
node_t* addDev(node_t*, char*, short, int, char*);

node_t* merge(node_t*, node_t*);
node_t* mergeDev(node_t*, node_t*, char*);

node_t* mergeThree(node_t*, node_t*, node_t*);
node_t* mergeThreeDev(node_t*, node_t*, node_t*, char*);

node_t* duplicate(node_t*);

bool   isEmpty(node_t*);

void isVisible(node_t*, char*, short, int);
void printItems(node_t*);
