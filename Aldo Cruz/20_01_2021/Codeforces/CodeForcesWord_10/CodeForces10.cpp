// CodeForces10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 




int main()
{
    //So aparently Petya need me to do it a program that actually changes a bunch of stuff for no reason, man i sometimes wonder why am i doing this if i dont even get payed. 
        
    
        int lenght = 0, count = 0; 
        string dot = "."; 
        string givenString; 
        string auxString;

        //Pido el string
        cin >> givenString; 
        //Guardo la variable del dato del tamaño en lenght * aunque pensando en retrospectiva, no era necesario, pero me amense.
        lenght = givenString.length();

        //Basicamente este for es para hacer un recorrido de la palabra y para eso necesitaba lenght 
        for (int i = 0; i < lenght; i++)
        {
            //Detecta si tiene una mayuscula.

            if (isupper(givenString[i]))
            {
                //De acuerdo al código ASCII las mayusculas tienen un cierto codigo numerico, si se pasa de eso es su contraparte. DIO!
                givenString[i] += 32;
            }
            //Condicion para checar si es una vocal, pero no se que hace la Y ahí la neta
            if (! (givenString[i] == 'a'|| givenString[i] == 'e'|| givenString[i] == 'i'|| givenString[i] == 'o'|| givenString[i] == 'u' ||givenString[i] == 'y'))
            {
                //Yo quería originalmente usar un array aux para poder guardar el dato, pero veo que me complique, y como decía nuestra maestra, siempre busca la sálida más fácil. 
                cout << ".";
                cout << givenString[i]; 
               
            }
         
            
        }
        
       
        return 0; 
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
