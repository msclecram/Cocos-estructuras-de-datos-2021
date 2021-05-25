#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

struct node
{
    int value;
    node* left;
    node* right;
};

class BST
{
public:
    BST()
    {
        root = nullptr;
    }

    bool AddElement(int value)
    {
        return AddElementRecursive(value, root);
    }

    bool Contains(int value)
    {
        ContainsRecursive(value, root);
    }
private:
    node *root;
    bool AddElementRecursive(int value, node *& currentNode)
    {
        if(currentNode == nullptr)
        {
            currentNode = new node();
            currentNode->value = value;
            currentNode->left = nullptr;
            currentNode->right = nullptr;
            return true;
        }
        
        if(value == currentNode ->value)
        {
            return false;
        }

        if(value < currentNode ->value)
        {
            return AddElementRecursive(value, currentNode->left);
        }
        else
        {
            return AddElementRecursive(value, currentNode->right);
        }
        return false;
    }

    bool ContainsRecursive(int value, node *& currentNode)
    {
        if(currentNode == nullptr)
        {
            return false;
        }
        else if(value == currentNode ->value)
        {
            return true;
        }
        else if(value < currentNode ->value)
        {
            return ContainsRecursive(value, currentNode->left);
        }
        else
        {
            return ContainsRecursive(value, currentNode->right);
        }
        return false;
    }
};

int main()
{
    
    BST bst;
    cout << bst.AddElement(10) << endl;
    cout << bst.AddElement(3) << endl;
    cout << bst.AddElement(2) << endl;
    cout << bst.AddElement(10) << endl;
    cout << bst.AddElement(2) << endl;

    cout << endl << "contains" << endl << endl;

    cout << bst.Contains(3) << endl;
    cout << bst.Contains(21) << endl;
}