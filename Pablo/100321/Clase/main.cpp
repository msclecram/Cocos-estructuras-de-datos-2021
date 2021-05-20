#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define N 1000
#define M 10

int A[N];
int T[N];

//int bucket[M];

void merge(int* array, int start, int end, int mid)
{
	int r = start;
	int a = start;
	int b = mid;

	while (r < end && a < mid && b < end)
	{
		if (array[a] < array[b])
		{
			T[r] = array[a];
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
		T[r] = array[a];
		a++;
		r++;
	}

	while (r < end && b < end)
	{
		T[r] = array[b];
		b++;
		r++;
	}

	for (int k = start; k < end; k++)
	{
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

	merge(array, start, end, mid);

}
/*
void bucketSort(int *array, int n)
{
	for (int r = 0; r < M; r++)
	{
		bucket[r] = 0;
	}

	for (int r = 0; r < n; r++)
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
*/

class Coordenada
{
public:
	float x;
	float y;
};

bool operator < (const Coordenada& a, const Coordenada& b)
{
	if (a.x < b.x || (a.x == b.x && a.y < b.y))
	{
		return true;
	}
	else
	{
		return false;
	}
}

Coordenada operator + (const Coordenada& a, const Coordenada& b)
{
	Coordenada temporal;
	temporal.x = a.x + b.x;
	temporal.y = a.y + b.y;
	cout << "\n" << temporal.x << " " << temporal.y << "\n";
	return temporal;
}

template < typename T>
void bubbleSort(T* array, int n)
{
	for (int r = 0; r < n; r++)
	{
			bool isSorted = true;

		for (int c = 0; c < n - 1; c++)
		{
			if (array[c + 1] < array[c])
			{
				T temp = array[c];
				array[c] = array[c + 1];
				array[c + 1] = temp;
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
	//srand(time(NULL));

	/*for(int r=0; r<10; r++)
	cout << rand()% 10 << "\n";*/

	/*for (int r = 0; r < N; r++)
	{
		A[r] = rand() % M;
		//cout << A[r] << " ";
	}*/

	Coordenada c[10];

	for (int r = 0; r < 10; r++)
	{
		c[r].x = rand() % M;
		c[r].y = rand() % M;
	}

	for (int r = 0; r < N; r++)
	{
		A[r] = rand() % M;
	}

	bubbleSort(c, 10);
	//bucketSort(A, N);
	//mergeSort(A, 0, N);

	cout << "\n";

	for (int r = 0; r < 10; r++)
	{
		cout << c[r].x << " " << c[r].y << "\n";
		
	}

	Coordenada a;
	Coordenada b;
	a.x = 1;
	a.y = 2;
	b.x = 4;
	b.y = 10;

	Coordenada C = a + b;


	return 0;
}