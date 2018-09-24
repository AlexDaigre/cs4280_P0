#ifndef ADD_H
#define ADD_H
#include <string>

    class BinarySearchTree { 
        private: 
            struct Node {
                std::string value;
                Node *left;
                Node *right;
                Node() {};
                Node(std::string value) {};
            };
            Node *rootNode;

        public:
            BinarySearchTree() {};

        private:
            void addNodeRecursiveBody(Node* node, std::string value) {};
            void preOrderRecursiveBody(Node* node) {};
            void inOrderRecursiveBody(Node* node) {};
            void postOrderRecursiveBody(Node* node) {};
    
        public:
            void addNode(std::string value) {};
            void traversePostorder() {};
            void traverseInorder() {};
            void traversePreorder() {};
    };

#endif