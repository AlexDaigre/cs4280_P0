#ifndef TREE_H
#define TREE_H
#include <string>

    class BinarySearchTree { 
        private: 
            struct Node {
                std::string value;
                Node *left;
                Node *right;
                Node();
                Node(std::string value);
            };
            Node *rootNode;

        public:
            BinarySearchTree();

        private:
            void addNodeRecursiveBody(Node* node, std::string value); 
            std::string getSpacesFromInt(int numberOfSpaces);
            void preOrderRecursiveBody(Node* node, std::ofstream &outputFile, int level);
            void inOrderRecursiveBody(Node* node, std::ofstream &outputFile, int level);
            void postOrderRecursiveBody(Node* node, std::ofstream &outputFile, int level);
    
        public:
            void addNode(std::string value);
            void traversePostorder(std::ofstream &outputFile);
            void traverseInorder(std::ofstream &outputFile);
            void traversePreorder(std::ofstream &outputFile);
    };

#endif