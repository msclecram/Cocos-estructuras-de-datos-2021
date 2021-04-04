// CodeForces5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 

int main()
{

	int n, c; 
	int count = 0; 

	cout << "\n columns \n";
	cin >> n;
	
	

	int arrayBox[100][100]; 


	for (int j = 0; j < 1000; j++)
	{
		cout << "\n numbers \n";
		cin >> n;
		
		for (int i = 0; i < n; i++)
		{
			cin >> c;
			//count = n;
			arrayBox[i][j] = c;
			
		}
	}

	cout << "\n\n";
	
	for (int i = 0; i < 1000; i++)
	{
		for (int j = 0; j < n; j++)
		{

			cout << arrayBox[i][j];
				
		}
		cout << " \n";
	}

		
	

	cout << " "; 
}

/*
#include <iostream>
using namespace std;

int arrayBox[1000];

int main()
{
*/
	//Resolución de clase
	/*
	int n, data1, data2, data3;
	int *A = nullptr;

	cin >> n;

	for (int j = 0; j < 1000; j++)
	{
		A = new int[n];
		int result = 0;

		for (int j = 0; j < n; j++)
		{
			cin >> data1 >> data2 >> data3;
			if (data1 + data2 + data3 >= 2)
			{
				result++;
			}
			cout << result;
			if (A)
			{
				delete [] A;
			}

		}
	}

	return 0;
}
*/