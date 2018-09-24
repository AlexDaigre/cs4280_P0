#include <string>
#include <stack>
#include <list>
#include <iostream>
using namespace std; 

class BinarySearchTree { 
    private: 
        struct Node {
            string value;
            Node *left;
            Node *right;

            Node() {
                this->value = "";
                this->left = NULL;
                this->right = NULL;
            }

            Node(string value = "") {
                this->value = value;
                this->left = NULL;
                this->right = NULL;
            }
        };

        Node *rootNode;
  
    public:
        void addNode(string value) { 
            bool complete = false; 
            Node *currentNode = this->rootNode;

            if (currentNode->value == "") {
                currentNode->value = value;
                return;
            }

            addNodeRecursiveBody(currentNode, value);
        }

        void traversePostorder() {
            Node *currentNode = this->rootNode;

            if (currentNode->value == ""){
                return;
            }

            postOrderRecursiveBody(currentNode);
        }

        void traverseInorder() {
            Node *currentNode = this->rootNode;

            if (currentNode->value == ""){
                return;
            }

            inOrderRecursiveBody(currentNode);
        }

        void traversePreorder() {
            Node *currentNode = this->rootNode;

            if (currentNode->value == ""){
                return;
            }

            preOrderRecursiveBody(currentNode);
        }

    private:
        void addNodeRecursiveBody(Node* node, string value) { 
            if (value.compare(node->value) > 0) {
                if (node->right == NULL) {
                    node->right = new Node(value);
                } else {
                    addNodeRecursiveBody(node->right, value);
                }
            } else {
                if (node->left == NULL) {
                    node->left = new Node(value);
                } else {
                    addNodeRecursiveBody(node->left, value);
                }
            }
        } 

        void preOrderRecursiveBody(Node* node) { 
            if (node == NULL) {
                return; 
            }

            cout << node->value << " "; 
            preOrderRecursiveBody(node->left); 
            preOrderRecursiveBody(node->right); 
        } 

        void inOrderRecursiveBody(Node* node) { 
            if (node == NULL) {
                return; 
            }

            inOrderRecursiveBody(node->left); 
            cout << node->value << " "; 
            inOrderRecursiveBody(node->right); 
        }

        void postOrderRecursiveBody(Node* node) { 
            if (node == NULL) {
                return; 
            }

            postOrderRecursiveBody(node->left); 
            postOrderRecursiveBody(node->right); 
            cout << node->value << " "; 
        } 
};