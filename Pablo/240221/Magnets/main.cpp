#include <iostream>

using namespace std;

int main()
{
	//declaro variables para n numero de magnetos y el contador de grupos formados
	int n, grupos = 0;

	//declaro la variable en donde guardare el magneto a comparar
	int magnet = 0;

	//pido el n numero de magnetos
	cin >> n;

	//declaro el arreglo de apuntadores para guardar magnetos
	int* array = new int[n];

	//limpio el arreglo y guardo posicion de magneto
	for (int i = 0; i < n; i++)
	{
		array[i] = 0;
		cin >> array[i];
	}

	//voy a recorrer el arreglo 
	for (int i = 0; i < n; i++)
	{
		//comparo si el magneto esta en la misma posicion con mi variable de comparacion
		if (array[i] != magnet)
		{
			//si es, entonces le sumo un grupo a la variable grupos
			grupos++;
		}
		//y le asigno la posicion del magneto elegido a la variable de comparacion
		magnet = array[i];

	}

	//al final imprimo el numero de grupos encontrados
	cout << grupos;

	return 0;
}