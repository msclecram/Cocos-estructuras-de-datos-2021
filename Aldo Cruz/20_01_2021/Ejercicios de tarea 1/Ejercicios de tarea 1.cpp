// Ejercicios de tarea 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 



int main()
{
    float facto = 1; 
    float result = 1;

    while (facto != -1)
    {
       
        cout << "\n\nHola!\n\nPorfavor estipula el factorial que deseas que calcule... \n";
        cin >> facto;

        if (facto != 0)
        {
            
            for (facto; facto > 0; facto--)
            {
                 
              
                
                result = facto * result; 

              
                

            }
            cout << fixed;
            cout << "\n\n"; 
            cout << result;
            result = 1;
        }
        else
        {
            cout << "Perdon el factorial de 0 es 1, ingresa otro numero."; 
        }
    } 
    cout << "Adios! \n Gracias :D" << flush; 
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
