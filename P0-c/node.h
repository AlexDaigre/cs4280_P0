#ifndef ADD_H
#define ADD_H
    struct Node {
        char *value;
        Node *left;
        Node *right;

        Node() {
            this->value = "";
            this->left = nullptr;
            this->right = nullptr;
        }

        Node(char *value) {
            this->value = value;
            this->left = nullptr;
            this->right = nullptr;
        }
    };
#endif