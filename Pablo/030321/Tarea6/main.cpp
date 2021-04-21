#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define N 100
const int coso;

int A[N];
int T[coso];

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
int main()
{
	for (int r = 0; r < N; r++)
	{
		A[r] = 0;
	}

	for (int r = 0; r < N; r++)
	{
		cin >> A[r];
	}
		mergeSort(A, 0, N);
	
	return 0;
}