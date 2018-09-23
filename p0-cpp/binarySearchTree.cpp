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
                complete = true;
            }

            while (complete == false){ 
                if (currentNode->value.compare(value) > 0) {
                    if (currentNode->value.compare(value) > 0) {
                        if (!currentNode->right) {
                            currentNode->right = new Node(value);
                            complete = true;
                        } else {
                            currentNode = currentNode->right;
                        }
                    } else {
                        if (!currentNode->left) {
                            currentNode->left = new Node(value);
                            complete = true;
                        } else {
                            currentNode = currentNode->left;
                        }
                    }
                }
            }
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