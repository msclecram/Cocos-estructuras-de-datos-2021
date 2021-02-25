#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define N 1000000

int A[N];

int main()
{
	srand(time(NULL));

	/*for(int r=0; r<10; r++)
	cout << rand()% 10 << "\n";*/

	for (int r = 0; r < N; r++)
	{
		A[r] =  r + rand()% 100;
		//cout << A[r] << " ";
	}

	for (int r = 0; r < N; r++)
	{
		for (int c = 0; c < N - 1; c++)
		{
			bool isSorted = true;
			if (A[c] > A[c + 1])
			{
				int temp = A[c];
				A[c] = A[c + 1];
				A[c + 1] = temp;
			}
			if (isSorted)
			{
				break;
			}
		}
	}

	cout << "\n";

	for (int r = 0; r < N; r++)
	{
		
	}
		cout << A[0] << " " << A[N-1] << " ";

	return 0;
}