#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include <string>

    class BinarySearchTree { 
        private: 
            struct Node {
                string value;
                Node *left;
                Node *right;
                Node() {};
                Node(string value) {};
            };
            Node *rootNode;

        public:
            BinarySearchTree() {};

        private:
            void addNodeRecursiveBody(Node* node, string value) {}; 
            string getSpacesFromInt(int numberOfSpaces) {};
            void preOrderRecursiveBody(Node* node, ofstream &outputFile, int level) {};
            void inOrderRecursiveBody(Node* node, ofstream &outputFile, int level) {};
            void postOrderRecursiveBody(Node* node, ofstream &outputFile, int level) {};
    
        public:
            void addNode(string value) {};
            void traversePostorder(ofstream &outputFile) {};
            void traverseInorder(ofstream &outputFile) {};
            void traversePreorder(ofstream &outputFile) {};
    };

#endif