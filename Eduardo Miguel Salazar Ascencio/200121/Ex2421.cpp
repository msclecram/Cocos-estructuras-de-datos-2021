#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

#define N 1000000
#define PRODUCCION
#define DESARROLLO

int A[N];

int main ()
{
    srand(time(NULL));
     for ( int r=0;r<N;r++)
     {
         cout << rand()%10 << " \n";
     }

    return 0;



    for ( int r=0;r<N;r++)
    {
        A[r] = N-r;
        //A[r] = r;
        //cout << A[r] << " ";
    }

    for ( int r=0;r<N;r++)
    {
        bool isSorted = true;
        for( int c=0;c<N-1 ;c++ )
        {
            
            if (A[c]>A[c+1] )
            {
                int temp = A[c];
                A[c] = A[c+1];
                A[c+1] = temp;
                isSorted = false;
            }
        }
        if (isSorted )
        {
            break;
        }
    }
        //10 9 8 7 6 5 4 3 2 1 
        //9 8 7 6 5 4 3 2 1 10
        //8 7 6 5 4 3 2 1 9 10
        cout << " \n";
        for( int r=0;r<N;r++)
        {
            //cout << A[r] << " ";
        }
        cout << A[0] << " " << A[N-1] << " ";
    return 0;
}