// Clase7_17_03_2021.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 

template<typename T>
struct Node
{
    T value;
    Node* pointer; 
};
template<typename T>
class LinkedList
{
    public: 

        LinkedList()
        {
            head = nullptr; 
        }

        /***
        *Esta funcion permite agregar un nuevo valor al inicio.
        * @param value Valor a agregar. 
        * @return no regresa nada. 
        */

        void AddToBegining(T value)
        {
            Node<T>* newNode = new Node<T>();
            newNode->value = value; 
            newNode->pointer = head;
            head = newNode; 
            cout << "Nueva cabeza vale:" << value << "\n"; 
        }

        void printList()
        {
            Node<T>* currentNode = head;
            while (currentNode != nullptr)
            {
                cout << currentNode->value << "\n"; 
                currentNode = currentNode->pointer; 
            }
        }

        Node<T>* getNodeWithValue(T value)
        {
            Node<T>* currentNode = head;
            while (currentNode != nullptr)
            {
                if (currentNode->value == value)
                {
                    return currentNode;

                }
                currentNode = currentNode->pointer;

            }
            return nullptr;
        }

        Node<T>* getValueAtIndex(int index)
        {
            
                Node<T>* currentNode = head;
                int counter = 0; 
                while (currentNode != nullptr)
                {
                    if (counter == index)
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
            if (head != nullptr)
            {
                Node<T>* lastHead = head; 
                head = head->pointer; 
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
    lista.AddToBegining("hola");
    lista.AddToBegining("baby");
    lista.AddToBegining("Johnny Bravo");
    lista.deleteFirstElement();
    lista.printList(); 

 

    if (lista.getNodeWithValue("baby") != nullptr)
    {
        cout << "Se encontro el valor \n"; 
    }
    else
    {
        cout << "No se encontro el valor \n"; 
        Node<string>* newValue = lista.getValueAtIndex(15);
        if (newValue != nullptr)
        {
            cout << newValue->value << "\n"; 
        }
    }
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
