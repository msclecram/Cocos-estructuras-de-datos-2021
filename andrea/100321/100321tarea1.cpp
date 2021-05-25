# include <iostream>
# include <string>
using namespace std;

//STRING TASK
int main ()
{
    //Espacio donde se guarda el caracter
    string character;
    //La computadora guarda la palabra otorgada por el usuario
    cin >> character;

    //Se hace el bucle con la cantidad de letras que hay plabra que dio el ususario
    for(int i=0; i < character.length(); i++)
    {
        //Se hace la comparación si hay un caracter en mayúscula 
        if (character[i] < 'a')
        {
            //y la hace minúscula (32 es para hacer minúsculas)
            character[i] += (char)32;
        }
        //Aquí se hace la comparación para saber si es diferente a la vocal e imprimirla
        if (character[i] != 'a' &&
            character[i] != 'e' &&
            character[i] != 'i' &&
            character[i] != 'o' &&
            character[i] != 'u' &&
            character[i] != 'y')
        {
            //Se indica imprimir el punto y la letra que no es vocal
            cout << '.' << character [i];
        }
    }
    return 0;
}