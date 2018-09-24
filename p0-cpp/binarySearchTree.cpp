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

            Node(string value) {
                this->value = value;
                this->left = NULL;
                this->right = NULL;
            }
        };

        Node *rootNode;

    public:
        BinarySearchTree() {
            this->rootNode = new Node();
        }

    private:
        void addNodeRecursiveBody(Node* node, string value) {
            cout << "Starting add new node recursion\n";
            if (value.compare(node->value) > 0) {
                cout << "New node is greater than current node\n";
                if (node->right == NULL) {
                    cout << "Current right node child is empty. Adding new right node.\n";
                    node->right = new Node(value);
                } else {
                    cout << "Right node already present, continuing traversal.\n";
                    addNodeRecursiveBody(node->right, value);
                }
            } else {
                cout << "New node is less than current node\n";
                if (node->left == NULL) {
                    cout << "Current left node child is empty. Adding new left node.\n";
                    node->left = new Node(value);
                } else {
                    cout << "Left node already present, continuing traversal.\n";
                    addNodeRecursiveBody(node->left, value);
                }
            }
            return;
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
  
    public:
        void addNode(string value) { 
            cout << "Starting node insert\n";

            if (this->rootNode->value.empty()) {
                this->rootNode->value = value;
                cout << "Initilised root node\n";
            }

            cout << "Adding new node\n";

            addNodeRecursiveBody(this->rootNode, value);
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
};