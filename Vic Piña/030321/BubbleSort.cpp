#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

#define N 100
#define M 15

int  A[N];
int B[M];

void Bubblesort(int *array, int n){
    for (int r=0; r<n; r++){
        bool isSorted = true;
        for (int c=0; c<n; c++) {
            if (array[c] > array[c+1]){
                int temp = array[c];
                array[c]=array[c+1];
                array[c+1]=temp;
                isSorted=false;
            }
        }
        if (isSorted){ break; }
    }
}

int main(){
    for(int r=0; r<N; r++){
        A[r]=N-r;
    }
    Bubblesort(A+50, 10);

    cout<< "\n";
    for(int r=0; r<N;r++){
        cout << A[r] << " ";
    }
    cout << "\n";
}