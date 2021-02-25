// EjerciciosClase5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std; 

#define N 100000
int A[N]; 

int main()
{
	srand(time(NULL)); 
	for (int i = 0; i < 10; i++)
	{
		cout << rand()%10 << "\n";
	}
	return 0; 

	for (int r = 0; r < N; r++)
	{
		//A[r] = N - r; 
		A[r] = r + rand()%10;
		//cout << A[r] << " "; 
    }

	for (int r = 0; r < N; r++)
	{
		bool isSorted = true; 
		for (int c = 0; c < N - 1; c++)
		{
			if (A[c] > A[c + 1])
			{
				int temp = A[c];
				A[c] = A[c + 1];
				A[c + 1] = temp; 
				isSorted = false; 

			}
		}
		if (isSorted)
		{
			break; 
		}
	}

	cout << "\n"; 
	for (int r = 0; r < N; r++)
	{
		//cout << A[0] <<" " << A[N-1] <<" ";
	}
	cout << A[0] << " " << A[N - 1] << " "; 

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
