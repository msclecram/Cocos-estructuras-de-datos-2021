#include <iostream>
using namespace std;

//STONES ON THE TABLE
int main()
{
    //Se declara una variable para obtener en número de piedras que se ingresa
    int stonenumbers;
    //Se declara el espacio para los colores
    char color;
    //Aquí se contarán las letras que tengan una gemela atrás
    int numgroup = 0;

    //Recibe la informnación del ususario
    cin >> stonenumbers;
    cin >> color;

    //Función para que se repita las veces que menciona el ususario
    for (int i= 0; i < stonenumbers -1; i++)
    {
        char newspace;
        cin >> newspace;
        //Detectar si es diferente o no
        if (newspace == color)
        {
            //Agregar al grupo
            numgroup ++;
        }
        //Si no es igual ese término ocupa el nuevo espacio
        else
        {
            color = newspace;
        }
    }
    //Muestra el total de grupitos
   cout << numgroup;
}
