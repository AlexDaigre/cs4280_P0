#include <string>
#include <stack>
#include <list>
using namespace std; 

struct Node {
    string value;
    Node *left;
    Node *right;

    Node(string value = "") {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

class BinarySearchTree { 
    private: 
    Node *rootNode;
  
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

    list<string> getPreOrderTraversal() {
    }

    list<string> printInOrderTraversal() {
        Node *currentNode = this->rootNode;
        list<string> traversalList;
        stack<Node *> nodeStack;

        if (currentNode->value == ""){
            return traversalList;
        }

        while (currentNode != NULL || nodeStack.empty() == false) { 
            while (currentNode !=  NULL) {
                nodeStack.push(currentNode); 
                currentNode = currentNode->left; 
            }
            currentNode = nodeStack.top(); 
            nodeStack.pop(); 
            
            traversalList.push_back(currentNode->value); 
        
            currentNode = currentNode->right;
        }
        return traversalList;
    }

    list<string> printPostOrderTraversal() {
        Node *currentNode = this->rootNode;
        list<string> traversalList;
        stack<Node *> nodeStack;

        if (currentNode->value == ""){
            return traversalList;
        }

        while (currentNode) {
            if (currentNode->right){
                nodeStack.push(currentNode->right);
            }
            nodeStack.push(currentNode);
            currentNode = currentNode->left;
        }
    }
};