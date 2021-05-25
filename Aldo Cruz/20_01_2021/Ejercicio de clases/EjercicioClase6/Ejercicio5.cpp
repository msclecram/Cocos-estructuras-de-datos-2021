// EjerciciosClase6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

#define N 100000
#define M 100000000

int A[N];
int T[N]; 
//int B[M]; 

//int bucket[M]; 

void merge(int* array, int start, int end, int mid)
{
	int r = start; 
	int a = start; 
	int b = mid; 

	while (r < end && a < mid && b < end)
	{
		if ( array[a] < array[b])
		{
			T[r] = array[b]; 
			a++; 
			r++; 

		}
		else
		{
			T[r] = array[b]; 
			b++;
			r++; 
		}
	}

	while (r < end && a < mid)
	{
		//Esto hace el llenado de lo que sería A o B, en este caso A
		T[r] = array[a]; 
		b++; 
		r++; 
	}

	while (r < end && b < end)
	{
		//En este caso B
		T[r] = array[b]; 
		b++; 
		r++; 
	}

	for (int k = start; k < end; k++)
	{
		//Esto sirve para cuando uno de los dos ya se lleno y mete todos los datos de regreso
		array[k] = T[k]; 
	}

}

void mergeSort(int* array, int start, int end)
{
	if (start == end - 1)
	{
		return; 
	}
	int mid = (start + end) / 2;

	mergeSort(array, start, mid);
	mergeSort(array, mid, end); 

}




/*void bucketSort(int* array, int n)
{
	for (int r = 0; r < M; r++)
	{
		bucket[r] = 0;

		for (int r = 0; r < M; r++)
		{
			bucket[array[r]]++;
		}

		int k = 0;
		for (int r = 0; r < M; r++)
		{
			for (int c = 0; c < bucket[r]; c++)
			{
				array[k] = r; 
				k++; 
			}
		}
	}
}
*/
void bubbleSort(int* array, int n)
{

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
}


int main()
{

	for (int r = 0; r < N; r++)
	{
		A[r] = N - r;

	}

	//
	//bucketSort(A, N); 
	//bubbleSort(A, N); 
	mergeSort(A, 0 , N); 

	cout << "\n"; 
	for (int r = 0; r < N; r++)
	{
		cout << A[r] << " ";
	}

	cout << "\n";
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
