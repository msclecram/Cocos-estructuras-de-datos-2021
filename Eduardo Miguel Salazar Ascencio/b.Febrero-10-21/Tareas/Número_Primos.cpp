#include <iostream>
#include <list> 
#include <iterator> 
using namespace std;

int main()
{
    //Se declaran variables
    int n;

    //Se le pregunta al usuario el n�mero l�mite a asginar
    cout << "Escribe el rango l�mite para encontrar n�meros primos: ";
    cin >> n;

    //Se asigna lista donde se guardar� informaci�n
    list <int> oddNumbers;
    list <int>::iterator iterator;
    for (int i = 0; i < n; i++)
    {
        oddNumbers.push_back(i + 1); 
    }

    for (int i = 2; i < n; i++)
    {
        //Se aplican multiplicaciones
        for (int j = i; j < n + 1; j += i)
        {
            if (!(j == i))
                oddNumbers.remove(j);
        }
        
    }
    
    //Se declara el resultado al usuario.
    cout << "existen " << oddNumbers.size() << "n�meros primos entre 1 y: " << n << endl; 

    iterator = oddNumbers.begin();

    for (int i = 0; i < oddNumbers.size() - 1; i++)
    {
        cout << *iterator << ", ";
        advance(iterator, 1);
    }

    cout << "and " << *iterator;
    return 0;
}