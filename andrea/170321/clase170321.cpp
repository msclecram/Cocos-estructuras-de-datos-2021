#include <stdio.h>
#include <iostream>
using namespace std;

template <typename T>
struct Node 
{
    T value;
    Node * pointer;
};

template <typename T>
class LinkedList
{
    public:
    LinkedList()
    {
        head= nullptr;
    }

    /***
     *Esta funcion permite agregar un nuevo valor al inicio.
     * @param value Valor  agregar. 
    */

    void addToBegining(T value)
    {
        Node<T> * newNode = new Node <T>();
        newNode -> value = value;
        newNode -> pointer = head;
        head = newNode;
        cout << "Nueva cabeza vale : " << value << "\n";
    }

    void printList()
    {
        Node<T> * currentNode = head;
        while (currentNode != nullptr)
        {
            cout << currentNode -> value << "\n";
            currentNode = currentNode -> pointer;
        }
    }

    /***
     * Esta función regresa el primner apuntador con el mismo valor.
     * @param value Valor a buscar.
     * @return El apuntador del valor buscado. nullptr si no lo encuentra.
    */

    Node<T> * getNodeWithValue(T value)
    {
        Node<T> * currentNode = head;
        while (currentNode != nullptr)
        {
            if (currentNode -> value == value)
            return currentNode;
            currentNode = currentNode -> pointer;
        }
        return nullptr;
    }

     Node<T> * getValueAtIndex(int index)
    {
        Node<T> * currentNode = head;
        int counter = 0;
        while (currentNode != nullptr)
        {
            if (counter == index)
            return currentNode;
            currentNode = currentNode -> pointer;
            counter ++;
        }
        return nullptr;
    }

    bool deleteHead()
    {
        if (head != nullptr)
        {
            Node<T> * lastHead = head;
            head = head -> pointer;
            delete lastHead;

            return true;
        }
        else 
        {
            return false;
        }
    }

    private:
    Node<T> * head;
};

int main ()
{
    LinkedList <string> lista;
    lista.addToBegining("hola");
    lista.addToBegining("prueba");
    lista.addToBegining("soy un string");
    lista.deleteHead();

    lista.printList();

    if (lista.getNodeWithValue("prueba") !=nullptr)
    cout << "Se encontró el valor \n";
    else
    cout << "No se encontró el valor \n";

    Node<string> * newValue = lista.getValueAtIndex(15);
    if (newValue != nullptr)
    cout << newValue -> value << "\n";
}
