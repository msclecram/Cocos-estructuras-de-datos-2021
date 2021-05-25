#include <iostream>

using namespace std;

//Los numeros primos son aquellos que solo son divibles entre 1 y si mismos.

int main()
{
    int primo; // variable en la cual se guardara el numero a evaluar

    cout << " Introduce el numero para saber si es primo o par"<< endl; // se pide el numero

    cin >> primo; // se guarda el numero

    if(primo % 2 == 0) // si primo modulo de dos es igual a 0 quiere decir que es par entonces..
    {
        cout << "es par"<< endl; // se imprime par
    }
    else // de lo contrario...
    {
        cout << "es primo " << endl; // se imprime primo
    }

    cout << "Se imprimira a continuacion la lista de los numeros que son primos de 0 al numero que elegiste" << endl;

    for(int i = 0; i <= primo; i ++)
    {
        if(i % 2 != 0)
        {
            cout << i << endl;
        }

    }

    return 0;
}
