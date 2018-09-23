#include <iostream> 
#include <iterator>
#include <fstream>
#include <string>
#include <list>
#include "binarySearchTree.h"
using namespace std;

list<string> readInputFromFile(string fileName);
list<string> readInputFromKeyboard();

int main (int argc, char *argv[]) {
    list<string> fileContents;
    if (argc == 2) {
        string filename = argv[1];
        fileContents = readInputFromFile(filename);
    } else if (argc == 1) {
        fileContents = readInputFromKeyboard();
    } else {
        cout << "There was an error with your arguments.";
        return 1; 
    }

    BinarySearchTree binarySearchTree;

    list<string>::iterator i;
    for (i = fileContents.begin(); i != fileContents.end(); ++i){
        string nextWord = *i;
        binarySearchTree.addNode(nextWord);
    }

    binarySearchTree.traversePreorder();
    binarySearchTree.traverseInorder();
    binarySearchTree.traversePostorder();
}

list<string> readInputFromFile(string fileName) {
    string fileNameWithExtention = fileName + ".fs182";
    string word;
    list<string> contents;
    ifstream myfile(fileName);

    if (myfile.is_open()) {
        while (myfile >> word) {
            contents.push_back(word);
        }
        myfile.close();
    } else {
        cout << "Unable to open file";
    }
    
    return contents;
}

list<string> readInputFromKeyboard() {
    string word;
    list<string> contents;
    while (cin >> word) {
        contents.push_back(word);
    }
    return contents;
}