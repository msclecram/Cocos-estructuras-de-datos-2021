#include <iostream>
using namespace std;

struct node{
    int value; 
    node* left;
    node* right;
};

class BinarySearchTree{

private:
    node *root;
public:
    BinarySearchTree(){
        root = nullptr;
    }
    bool AddElement(int value){
        return AddElementRecursive(value, root);
    }    
private:
    bool AddElementRecursive(int value, node*& currentNode){
        if(currentNode == nullptr){
            currentNode = new node();

            currentNode->value = value;

            currentNode->left = nullptr;
            currentNode->right = nullptr;

            return true;
        }

        if(value == currentNode->value){
            return false;
        }

        if(value < currentNode->value){
            return AddElementRecursive(value, currentNode->left);
        } else {
            return AddElementRecursive(value, currentNode->right);
        }
        return false;
    }
};

int main() {
    BinarySearchTree bst;
    cout << bst.AddElement(10) << "\n";
    cout << bst.AddElement(3) << "\n";
    cout << bst.AddElement(2) << "\n";
    cout << bst.AddElement(10) << "\n";
    cout << bst.AddElement(2) << "\n";
    cout << "Constrains" << "\n";
    cout << bst.AddElement(10) << "\n";
    cout << bst.AddElement(2) << "\n";
    cout << bst.AddElement(5) << "\n";
    cout << bst.AddElement(13) << "\n";
    cout << bst.AddElement(-2) << "\n";    
    return 0;
}