#include <iostream>
using namespace std;

template<typename T>
struct Node
{
    T value;
    Node* pointer;
};

template<typename T>
class LinkedList{
public:
    LinkedList()
    {
        head = nullptr;
    }
    void AddTOBeginning(T value){
        Node<T>* newNode = new Node<T>();
        newNode->value = value;
        newNode->pointer = head;
        head = newNode;
        cout<<"New head value: "<<value<<"\n";
    }

    void PrintList(){
        Node<T>* currentNode = head;
        while (currentNode != nullptr){
            cout<<currentNode->value<<"\n";
            currentNode = currentNode->pointer;
        }
    }

    Node<T>* GetNodeWithValue(T value){
        Node<T>* currentNode = head;
        while (currentNode!=nullptr){
            if (currentNode->value == value)
            {
                return currentNode;
            }
            currentNode = currentNode->pointer;
        }
        return nullptr;
    }

    Node<T>* GetValueAtIndex(int index){
        Node<T>* currentNode = head;
        int counter =0;
        while (currentNode!=nullptr){
            if (counter==index)
            {
                return currentNode;
            }
            currentNode = currentNode->pointer;
            counter++;
        }
        return nullptr;
    }

    bool DeleteHead(){
        if (head!=nullptr)
        {
            Node<T>* lastHead = head;
            head = head->pointer;
            delete lastHead;

            return true;
        } else {
            return false;
        }
        
    }
private:
    Node<T>* head;
};

int main(){
    LinkedList<string> lista;
    lista.AddTOBeginning("Ocho");
    lista.AddTOBeginning("Once");
    lista.AddTOBeginning("Noventa y siete");
    lista.DeleteHead();
    lista.PrintList();

    if(lista.GetNodeWithValue("Quince") != nullptr){
        cout<< "Value found\n";
    } else {
        cout << "Value not found\n";
    }
    Node<string>* newValue = lista.GetValueAtIndex(2);
    if (newValue!=nullptr){
        cout<<newValue->value<<"\n";
    }
}