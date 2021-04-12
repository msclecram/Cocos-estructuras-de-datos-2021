#include <iostream>
using namespace std;

template <typename T>
struct Node
{
    T value;
    Node* pointer;
};

template <typename T>
class LinkedList
{
public:
    LinkedList()
    {
        head = nullptr;
    }
    
    void addToBeginning(T value)
    {
        Node<T>* newNode = new Node<T>();
        newNode ->value = value;
        newNode->pointer = head;
        head = newNode;
        cout << " Nueva Cabeza vale : " << value << endl ;
    }
   
    void printList()
    {
        Node<T>* currentNode = head;
        while (currentNode!=nullptr)
        {
            cout << currentNode->value << endl;
            currentNode = currentNode->pointer;
        }
        
    }
    
    Node<T>* GetNodeWithValue(T value)
    {
        Node<T>* currentNode = head;
        while (currentNode!=nullptr)
        {
            if(currentNode->value == value)
            {
                return currentNode;
            }
            currentNode = currentNode->pointer;
        }
        return nullptr;
    }
    
    Node<T>* GetValueAtIndex(int index)
    {
        Node<T>* currentNode = head;
        int counter = 0;
        while (currentNode!=nullptr)
        {
            if(counter == index)
            {
                return currentNode;
            }
            currentNode = currentNode->pointer;
            counter++;
        }
        return nullptr;
    }

    bool deleteFirstElement()
    {
        if(head != nullptr)
        {
            Node<T>* lastHead = head;
            head == head->pointer;
            delete lastHead;
            return true;
        }
        else
        {
            return false;
        }
    }

private:
    Node<T>* head;
};

int main()
{
    LinkedList<string> lista;
    lista.addToBeginning("AAAAAAAAAA");
    lista.addToBeginning("Dead Inside");
    lista.addToBeginning("Sweet relief of Desth");
    lista.printList();

    if(lista.GetNodeWithValue("AAAAAAAAAA") != nullptr)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;

    Node<string>* newValue = lista.GetValueAtIndex(2);
    
    if (newValue != nullptr)
    {
        cout << newValue->value << endl;
    }

    cout << lista.deleteFirstElement() << endl;
    
}