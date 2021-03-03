#include <iostream>

using namespace std;


int main()
{
	//Declaracion de variables n para el numero de problemas, p para el input de quien cree resolverlo por cada problema, contador1 para contar quienes si creeyeron por problema y contador2 para sumar los problemas que si se resuelven
	int n,p, contador1 = 0, contador2 = 0;

	cin >> n;

	//se declara el arreglo como apuntador ya que porque visual solo permite usar constantes para el tamano del arreglo ademas de que c++ no permite arreglos bidimensionales con tamanos dinamicos
	// obtuve ayuda de la siguiente pagina para declarar el array -https://stackoverflow.com/questions/29054812/how-to-create-a-two-dimensional-array-of-given-size-in-c
	int(*array)[3] = new int[n][3]; 

	//este for recorre el numero de problemas uno a uno tambien podria decirse que recorre las filas
	for (int i = 0; i < n; i++)
	{
		//este for recorre cada uno de los amigos en sus respuestas por problema
		for (int f = 0; f < 3; f++)
		{
			//aqui se lee la respuesta de cada amigo
			cin >> p;
			//se guarda la respuesta en el arreglo
			array[i][f] = p;

			//si la respuesta es 1 entra y suma al contador1
			if (array[i][f] == 1)
			{
				contador1++;
			}
		}
		
		//si el contador1 tiene 2 o mas se le suma 1 a contador dos refirendose a que ese problema se puede resolver
		if (contador1 >= 2)
		{
			contador2 += 1;
			//se reinicia el contador1
			contador1 = 0;
		}
		else
		{
			//aunque no pase nada se reinicia el contador1 para el siguiente problema
			contador1 = 0;
		}

		
	}
	//al terminar se imprime el numero de problemas que se pueden resolver
	cout << contador2;
	

	return 0;
}