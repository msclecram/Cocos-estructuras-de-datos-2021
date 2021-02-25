#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

#define  n  10000

int A[n];

int main()
{
    srand(time(NULL));
    
    for (int i = 0; i < n; i++)
    {
        A[i] = i + (rand() % 100);
        cout << A[i] << endl;

        
    }

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n-1; j++)
    {
        bool isSorted = true;
        if (A[j] > A[j+1])
        {
            int temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
            isSorted = false;
        }

        if (isSorted)
        {
            break;
        }
        
    }
}

cout << endl;
for (int i = 0; i < n; i++)
{
    //cout << A[i] << " ";
}
    return 0;
}