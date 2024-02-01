#ifndef LISTHANDLER
#define LISTHANDLER

typedef struct linkedNode {
    int id;
    void* any;
    struct linkedNode* next;
} node ;

node* createNode(const int id, void* any);

node* addNode(const int id, void* any, node* origin);

node* lookupNode(node* origin, int id);

node* addLast(const int id, void* any, node* origin);

void forAllNode(void (*func)(void *), node* origin);

void deleteNode(node* origin, int id);

void deleteAllNodeFrom(node* origin);


#endif