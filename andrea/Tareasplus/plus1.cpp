#include <iostream>
using namespace std;

//WATERMELON
int main ()
{
    //Se deckara la variable para que se gusrade el dato del ususario
    int parts;
    //Se recibe la información del ususario
    cin >> parts;

    //Cuando es 2 no vale tampoco debido a que hay nones
    if (parts == 2)
    {
        cout << "NO";
        return 0;
    }
    //Si el residuo es uno, imprimirá que no porque es non
    if (parts %2 == 1)
    {
        cout << "NO";
    }
    //Si el residuo es 0, imprimirá que si porque es número par
    if (parts %2 == 0)
    {
        cout << "YES";
    }
}