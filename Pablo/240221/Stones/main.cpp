#include <iostream>

using namespace std;

int main()
{
	//declaro variables para n numero de rocas y el contador de espacios
	int n, espacios = 0;

	//declaro la variable en donde guardare el color de roca para comparar
	char roca = ' ';

	//pido el n numero de rocas
	cin >> n;

	//declaro el arreglo de apuntadores para guardar el color de las n rocas
	char* array = new char[n];
	
	//limpio el arreglo y guardo color por color en el arreglo
	for (int i = 0; i < n; i++)
	{
		array[i] = ' ';
		cin >> array[i];
	}

	//voy a recorrer el arreglo de rocas 
	for (int i = 0; i < n; i++)
	{
		//comparo si la roca elegida es igual a mi variable de comparacion 
		if (array[i] == roca)
		{
			//si es, entonces le sumo un espacio a la variable
			espacios++;
		}
		//y le asigno el color de la roca elegida a la variable de comparacion
		roca = array[i];

	}

	//al final imprimo el numero de espacios necesarios
	cout << espacios;

	return 0;
}