// Ejercicios de tarea 1.33.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 

int main()
{
    int stop, i, j, num, cont = 0;
    int des; 
    int count; 
    cout << "Bienvenido al generador de piramides :D presiona 1 si quieres tu piramide normal o 2 \n si la quieres invertida o presiona 0 para salir.";
    cin >> des;
    switch (des)
    {
    case 1: 

        cout << "Bueno, dame un numero para tu piramide";
        cin >> num;

        for (stop = 0; stop <= num; stop++)
        {
            for (i = num; i > stop; i--)
            {
                cout << (" ");
            }
            for (j = 0; j < stop + 1; j++)
            {

                cout << (" *");

            }
            cout << ("\n");
        }
        cout << flush;
        break; 

    case 2: 
        cout << "Bueno, dame un numero para tu piramide";
        cin >> num;
        count = 0; 
        do
        {
           
                for (j = 0; j <= count; j++)
                {
                    //ok, esste for en pocas palabras nos controla los espacios por cada ronda. 
                    //En mi pensamiento todo menso lo estuve viendo en un inicio como fila y columna, pero hace años no me funciono ese planteamiento, así que de nuevo hice el mío. 
                    //Entonces primero hacía el espacio de los "espacios" (redundante) y entonces quedaba bonito y acomodado para los posteriores simbolos. 
                    cout << (" ");
                }

                for (i = 0; i < num; i++)
                {
                    //Una vez establecidos los espacios dibujo mis rondas de simbolos clave.
                    //+ un espacio porque si no aún queda muy pegado. 
                    cout << (" s");
                }
            
            count++; 
            cout << ("\n"); 
            num--; 
             

        } while (num > 0);

        cout << flush;
        break; 

    case 0: 

        cout << flush; 
        cout << "Adios!"; 
        return 0; 

        break; 

    }
   
}

