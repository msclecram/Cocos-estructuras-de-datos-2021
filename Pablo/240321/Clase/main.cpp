#include <iostream>
#include <list>

using namespace std;

int main()
{
	list< int > lista;

	lista.push_back(10);
	lista.push_front(2);
	lista.push_back(4);
	lista.push_front(15);

	//15,2,10,4

	//Para imprimir el principio
	//list< int >::iterator a = lista.begin();
	//cout << (*a) << "\n";

	//este iterador se llama foward and backward
	// it++, it--  NO it+5 (list< int >::iterator it = lista.begin(); it != lista.end(); it++)
	
	list< int >::iterator it = lista.end();
	it--;
	for( ; it != lista.begin(); it--)
	{
		cout << (*it) << "\n";
	}

	return 0;
}