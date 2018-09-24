#include <iostream> 
#include <iterator>
#include <fstream>
#include <string>
#include <list>
#include "tree.h"
using namespace std;

list<string> readInputFromFile(string fileName);
list<string> readInputFromKeyboard();

int main (int argc, char *argv[]) {
    list<string> fileContents;
    string filename;
    if (argc == 2) {
        filename = argv[1];
        fileContents = readInputFromFile(filename);
    } else if (argc == 1) {
        filename = "out";
        fileContents = readInputFromKeyboard();
    } else {
        cout << "There was an error with your arguments.\n";
        return 1; 
    }

    cout << "got input\n";

    BinarySearchTree binarySearchTree;

    list<string>::iterator i;
    for (i = fileContents.begin(); i != fileContents.end(); ++i){
        string nextWord = *i;
        cout << "adding word " << nextWord << " to tree\n"; 
        binarySearchTree.addNode(nextWord);
    }

    cout << "Finished adding words to tree\n";

    ofstream preOrderOutputFile;
    string preOrderOutputFileName = filename + ".preorder";
    preOrderOutputFile.open(preOrderOutputFileName);
    binarySearchTree.traversePreorder(preOrderOutputFile);
    preOrderOutputFile.close();

    ofstream inOrderOutputFile;
    string inOrderOutputFileName = filename + ".ineorder";
    inOrderOutputFile.open(inOrderOutputFileName);
    binarySearchTree.traverseInorder(inOrderOutputFile);
    inOrderOutputFile.close();

    ofstream postOrderOutputFile;
    string postOrderOutputFileName = filename + ".postorder";
    postOrderOutputFile.open(postOrderOutputFileName);
    binarySearchTree.traversePostorder(postOrderOutputFile);
    postOrderOutputFile.close();
}

list<string> readInputFromFile(string fileName) {
    string fileNameWithExtention = fileName + ".fs182";
    cout << "atempting to open " << fileNameWithExtention << "\n";
    string word;
    list<string> contents;
    ifstream myfile(fileName);

    if (myfile.is_open()) {
        while (myfile >> word) {
            contents.push_back(word);
        }
        myfile.close();
    } else {
        cout << "Unable to open file\n";
    }
    
    return contents;
}

list<string> readInputFromKeyboard() {
    string word;
    list<string> contents;
    cout << "getting input\n";
    while (cin >> word) {
        contents.push_back(word);
        cout << " detected word, ";
    }
    cout << "\nEnding word detection\n";
    return contents;
}