// CodeForces7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int main()
{
    int n;
    char array[100];
    int count = 0;

    //Toma el dato de las cartas
    cin >> n;

    //Con esto hacemos el llenado de cada carta 
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];

    }

    for (int i = 0; i < n; i++)
    {
        //Esta condicional toma que las cartas sean iguales para verificar el dato y agregarlo al grupo. 
        if (array[i] == array[i + 1])
        {
            //El contador 
            count++;

        }

    }


    cout << count;
}

