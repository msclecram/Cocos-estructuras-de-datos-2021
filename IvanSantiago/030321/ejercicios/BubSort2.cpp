#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

#define N 100
#define M 15

int A[N];
int B[M]; 

void bubbleSort(int* array, int n)
{

    for (int r = 0; r < N; r++)
    {
        bool isSorted = true;
        for (int c = 0; c < N - 1; c++)
        {
            if (A[c] > A[c + 1])
            {
                int temp = A[c];
                A[c] = A[c + 1];
                A[c + 1] = temp;
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

    for (int r = 0; r < N; r++)
    {
        A[r] = N - r;

    }



    bubbleSort(A, N); 


    cout << "\n"; 
    for (int r = 0; r < N; r++)
    {
        cout << A[r] << " ";
    }

    cout << "\n";
    cout << A[0] << " " << A[N - 1] << " ";

    return 0;
}