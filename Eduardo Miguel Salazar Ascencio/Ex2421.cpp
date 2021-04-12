#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

#define N 100
#define M 15
#define PRODUCCION
#define DESARROLLO

int A[N];
void bubbleSort( int *array , int n)
{
     for ( int r=0;r<N;r++)
    {
        bool isSorted = true;
        for( int c=0;c<N-1 ;c++ )
        {
            
            if (array[c]>array[c+1] )
            {
                int temp = array[c];
                array[c] = array[c+1];
                array[c+1] = temp;
                isSorted = false;
            }
        }
        if (isSorted )
        {
            break;
        }
    }
}

int main ()
{
    
    for ( int r=0;r<N;r++)
    {
        A[r] = N-r;
        //A[r] = r;
        //cout << A[r] << " ";
    }

    bubbleSort(A+50, 10);

        cout << " \n";
        for( int r=0;r<N;r++)
        {
            //cout << A[r] << " ";
        }
        cout << A[0] << " " << A[N-1] << " ";
        cout << "\n";
        cout << A[0] << " " << A[N-1] << "\n";
        return 0;
}