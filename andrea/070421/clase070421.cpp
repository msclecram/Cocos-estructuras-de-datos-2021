#include <iostream>
using namespace std;

struct node
{
    int value;
    node* left;
    node* right;
};

class BinarySearchTree
{
    private:
    node* root;

    public: 
    BinarySearchTree()
    {
        root = nullptr;
    }
    bool AddElement (int value)
    {
        return AddElementRecursive (value, root);
    }
    bool Contains (int value)
    {
        return ContainsRecursive (value, root);
    }

    private:
    bool AddElementRecursive (int value, node*& currentNode)
    {
        if (currentNode == nullptr)
        {
            currentNode = new node();
            currentNode -> value= value;

            currentNode -> left= nullptr;
            currentNode -> right= nullptr;

            return true;
        }

        if (value == currentNode -> value)
        {
            return false;
        }

        if (value < currentNode -> value)
        {
            return AddElementRecursive (value, currentNode -> left);
        }
        else
        {
            return AddElementRecursive (value, currentNode -> right);
        }
        return false;
    } 

    bool ContainsRecursive (int value, node*& currentNode)
    {
        if (currentNode == nullptr)
        {
            return false;
        }

        if (value == currentNode -> value)
        {
            return true;
        }

        if (value < currentNode -> value)
        {
            return ContainsRecursive (value, currentNode -> left);
        }
        else
        {
            return ContainsRecursive (value, currentNode -> right);
        }
        return false;
    } 
};

int main ()
{
    BinarySearchTree bst;
    cout << bst.AddElement (10) << "\n";
    cout << bst.AddElement (3) << "\n";
    cout << bst.AddElement (2) << "\n";
    cout << bst.AddElement (10) << "\n";
    cout << bst.AddElement (2) << "\n";

    cout << "Contains\n";

    cout << bst.Contains (2) << "\n";
    cout << bst.Contains (10) << "\n";
    cout << bst.Contains (15) << "\n";
    cout << bst.Contains (-1) << "\n";
    cout << bst.Contains (3) << "\n";
    return 0;
}
