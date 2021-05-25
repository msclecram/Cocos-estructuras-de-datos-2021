// Codeforces_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 

int main()
{
	int n = 1, i = 0, j;
		
	//Pos le pregunto el numero de participantes (cosa que me falto al inicio) y con eso determino el tamaño de mi for
	cin >> j;
	//My endless loop
	for (i; i < j; i++)
	{
		//Le pido el dato entre 0 y 1
		cin >> n;

		//Dado que el diferenciador más grande es si algún participante puso 1 y se cambia todo pues se toma como el único condicional 
		if (n == 1)
		{
			cout << "HARD";
			return 0;
		}


	}
	//Si termina y es 0 pues da EASY piece 
	if (n == 0)
	{
		cout << "EASY";
		return 0;
	}

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
