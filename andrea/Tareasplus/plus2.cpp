#include <iostream>
#include <string>
using namespace std;

//PETYA AND STRINGS
int main ()
{
    //Crear los espacios donde se guardaran las cadenas otorgadas por el ususario
    string chain1;
    string chain2;
    //Se recibe la información del ususario
    cin >> chain1 >> chain2;

    //Se busca pasar mayúsculas a minúsculas
    for(int i=0; i < chain1.size (); i++)
    {
        if (chain1 [i] < 'a')
        {
            chain1 [i] += (char) 32;
        }
    }
    for(int i=0; i < chain2.size (); i++)
    {
        if (chain2 [i] < 'a')
        {
            chain2 [i] += (char) 32;
        }
    }
    //Aquí se hacen las comparaciones para saber si son iguales o mayores o menores y se imprima su respectiva respesta de la comparación
    if (chain1 < chain2)
    {
        cout << "-1";
        return 0;
    }
    if (chain1 > chain2)
    {
        cout << "1";
        return 0;
    }
    if (chain1 == chain2)
    {
        cout << "0";
        return 0;
    }

}