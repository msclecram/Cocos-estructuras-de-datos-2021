
// Codeforces4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 

int main()
{
    int n, count = 0; 
    int result = 0;
    cin >> n;




   
    int array[100][100]; 

   
   
    //lineas? rows, eso...
    for (int i = 0; i < n; i++)
    {
        //columnas 
        for (int j = 0; j < 3; j++)
        {
            
            cin >> array[i][j];
        }
        
    }
    
    
    //lineas? rows, eso...
    for (int i = 0; i < n; i++)
    {
        count = 0; 
        //columnas 
        for (int j = 0; j < 3; j++)
        {
           
            if (array[i][j] == 1)
            {
                count++;
                
                if (count == 2 )
                {
                    result++; 

                    j++; 
                    
                   
                }
            }

        }

    }



    cout << result;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
