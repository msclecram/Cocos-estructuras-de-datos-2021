#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

	vector< int > v;

	//v.reserve(10);//para guardar el valor

	for (int i = 0; i < 10; i++)
	{
		cout << "valores guardados: " << v.size() << "\n";
		cout << "capacidad guardada: " << v.capacity() << "\n";
		cout << "------------------------------\n";
		//agregando el valor de i en ese espacio
		//v.push_back(i);

		//agregando un valor random en ese espacio
		v.push_back(rand()%10);
	}

	//iterador de tipo random
	vector< int >::iterator it = v.begin();
	//se puede hacer el salto sin problemas it += 5;
	//cout << "iterador inicial: " << (*it) << "\n";

	v.erase(it);//borra un elemento pero tiene un problema porque como la memoria es continua y por ejemplo del primer elemento necesita n operaciones,  en cmabio si es el ultimo no hay problema porque sigue ordenado
	//v.clear();//vacia el arreglo

	sort(v.begin(), v.end());

	for (int r = 0; r < v.size(); r++)
	{
		cout << v[r] << " ";
	}

	vector< vector<int> > matrix;

	for (int i = 0; i < 10; i++)
	{
		vector< int > array;
		for (int r = 0; r < i; r++)
		{
			array.push_back(r);
		}

		matrix.push_back(array);
	}

	//se imprime el vector
	for (int r = 0; r < matrix.size(); r++)
	{
		//recorre cada espacio por su tamano
		for (int i = 0; i < matrix[r].size(); i++)
		{
			cout << matrix[r][i] << " ";
		}
		cout << "\n";
	}

	//copia el vector
	vector< vector<int> > matrix2 = matrix;

	return 0;
}

//ejemplo de funcion
//se envia como una copia y se vuelve estructura pesada,si no puedes usar &matrix un apuntador para que se pase la info real
void f(vector< vector<int> > matrix)
{
	matrix[0][0] = 50;
}