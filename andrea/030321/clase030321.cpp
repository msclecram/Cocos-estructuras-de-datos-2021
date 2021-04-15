#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;


#define N 100
#define M 15
#define PRODUCCION
#define DESARROLLO
int A [N];
int T [N];
int bucket [M];

void merge (int * array, int start, int end, int mid)
{
    int r = start;
    int a= start;
    int b = mid;

    while (r < end && a < mid && b < end)
    {
        if (array[a] < array [b])
        {
            T[r] = array [a];
            a++;
            r++;
        }
        else {
            T[r] = array[b];
            b++;
            r++;
        }
    }

    while (r < end && a < mid)
    {
        T[r] = array [a];
            a++;
            r++;
    }

    while (r < end && b < end)
    {
        T[r] = array [b];
            b++;
            r++;
    }

    for (int k= start; k < end; k++)
    {
        array[k] = T[k];
    }
}
void mergeSort (int *array, int start, int end)
{
    if (start == end-1)
    return;

    int mid = (start + end)/2;
    mergeSort (array, start, mid);
    mergeSort (array, mid, end);
    merge(array, start, end,mid);
}

void bucketSort (int * array, int n)
{
    for (int r= 0; r < M; r++)
    bucket [r]-0;

    for (int r= 0; r < n; r++)
    {
        bucket [array [r]]++;
    }
    int k= 0;
    for (int r=0; r<M; r++)
    {
        for (int c=0; c < bucket [r]; c++)
        {
            array [k] = r;
            k++;
        }
    }
}

void bubbleSort (int *array, int n)
{
    for (int r= 0; r < n; r++)
    {
        bool isSorted = true;
        for (int c= 0; c < n-1; c++)
        {
            if (array [c]> array[c+1])
            {
                int temp = array[c];
                array[c] = array[c+1];
                array[c+1] = temp;
                isSorted = false;
            }
        }
        if (isSorted)
        {
            break;
        }
    }
}

int main ()
{
    for(int r=0; r<10; r++)
    {
        //A [r] = N-r;
        A [r] = rand()%M;
    }

    //bubbleSort(A,N);
    //bubbleSort(A,N);
    mergeSort(A,0,N);

    cout << "\n";
    for (int r=0; r<N; r++)
    {
        cout << A[r] << " ";
    }
    cout << "\n";
    cout << A[0] << " " << A[N-1] << "\n ";
    return 0;
}
