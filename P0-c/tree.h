#ifndef ADD_H
#define ADD_H
#include "node.h"
    Node *buildTree(FILE *); 
    void traverseInorder(Node node_t*, const char[]);
    void traversePreorder(node_t*, const char[]);
    void traversePostorder(node_t*, const char[]);
#endif