#include "listHandler.h"
#include <stdlib.h>
#include <stdio.h>

node* createNode(const int id, void* any) {
    node* newNode = malloc(sizeof(node));
    *newNode = (node) {
        id, any, NULL
    };
    return newNode;
}

node* addNode(const int id, void* any, node* origin) {
    node* newNode = createNode(id, any);
    newNode->next = origin->next;
    origin->next = newNode;
    return newNode;
}

node* lookupNode(node* origin, int id) {
    if (origin == NULL) return NULL;

    while (1) {
        if (origin->id == id) return origin; 

        if (origin->next == NULL) return NULL;
        
        origin = origin->next;
    }
    return NULL; // <- can't access
}

node* lookupParentNode(node* origin, int id) {
    node* parent = NULL;
    
    if (origin == NULL) return NULL;

    while (1) {
        if (origin->id == id) return parent; 

        if (origin->next == NULL) return NULL;
        
        parent = origin;
        origin = origin->next;
    }
    return NULL; // <- can't access

}
node* addLast(const int id, void* any, node* origin) {

    if (origin->next == NULL) {
        return addNode(id, any, origin);
    }

    int firstId = origin->id;
    origin = origin->next;
    while (origin->next != NULL && firstId != origin->id) {
        origin = origin->next;
    }
    return addNode(id, any, origin);
    
}

void forAllNode(void (*func)(void *), node* origin) {
    func(origin->any);
    if (origin->next != NULL) forAllNode(func, origin->next);
}



void deleteNode(node* origin, int id) {
    node* parent = lookupParentNode(origin, id);
    node* child = lookupNode(origin, id);

    if (parent == NULL && child == NULL) return;

    if (parent == NULL) {
        origin = child->next;
        free(child->any);
        free(child);
        return;
    }

    node* newDirectChild = NULL;

    if (parent->next->next != NULL) {
        newDirectChild = parent->next->next;
    } 

    free(parent->next->any);
    free(parent->next);
    parent->next = newDirectChild;
}


void deleteAllNodeFrom(node* origin) {
    if (origin->next != NULL) deleteAllNodeFrom(origin->next);

    free(origin->any);
    free(origin);
}