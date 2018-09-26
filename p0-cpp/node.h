#ifndef NODE_H
#define NODE_H
    #include <string>

    struct Node {
        std::string value;
        Node *left;
        Node *right;

        Node() {
            this->value = "";
            this->left = NULL;
            this->right = NULL;
        }

        Node(std::string value) {
            this->value = value;
            this->left = NULL;
            this->right = NULL;
        }
    };

#endif