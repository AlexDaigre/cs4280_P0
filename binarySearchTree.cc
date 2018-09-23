#include <string>
using namespace std; 

struct Node {
    string value;
    Node *left;
    Node *right;

    Node(string val) {
        this->value = val;
    }

    Node(string val, Node *left, Node *right) {
        this->value = val;
        this->left = left;
        this->right = right;
    }
};

class BinarySearchTree { 
    private: 
    Node rootNode;
  
    void addNode(string value) { 
        
    } 
}; 