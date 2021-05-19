#include <iostream>
using namespace std;

int main()
{
    //Se declaran variables
    int n;

    //Se pregunta el valor a checar
    cout << "El valor que quieres checar es: ";

    //Se salva el valor escrito
    cin >> n;

    //Se calcula si es non o par
    if (n % 2 == 1)
    {
        cout << n << " es un número non :)";
    }
    else
    {
        cout << n << " es un número par :)";
    }
    
    return 0;
}