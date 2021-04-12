#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	//declaro las variables para las columnas y el numero de cubos por caja
	int c,cubo;
	//pido la entrada del numero de columnas
	cin >> c;
	//declaro el array con apuntador porque visual no deja que el size del arreglo sea dinamico
	int* array = new int[c];

	//entra al for en donde se leeran la cantidad de cubos por columna
	for (int i = 0; i < c; i++)
	{
		cin >> cubo;
		array[i] = 0;
		array[i] = cubo;
	}

	//la funcion como su nombre lo dice ordena un vector o en este caso un arreglo tomando como parametros el inicio del arreglo y la cantidad de numeros a ordenar
	std::sort(array,array+c);
	
	//este for imprime el arreglo uno por uno
	for (int i = 0; i < c; i++)
	{
		cout << array[i] << " ";
	}

	//se borra el espacio de memoria ocupado
	if (array)
	{
		delete [] array;
	}

	return 0;
}