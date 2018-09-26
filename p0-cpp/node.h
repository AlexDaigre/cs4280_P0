#ifndef NODE_H
#define NODE_H
    #include <string>
    #include <set>

    struct Node {
        std::set<std::string> valuesSet;
        std::string value;
        Node *left;
        Node *right;

        Node() {
            this->value = "";
            this->left = NULL;
            this->right = NULL;
        }

        Node(std::string value) {
            this->value = value.front();
            this->valuesSet.insert(value);
            this->left = NULL;
            this->right = NULL;
        }
    };

#endif