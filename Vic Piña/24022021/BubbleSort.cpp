#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

#define N 10

int  A[N];

int main(){
    bool isSorted;
    srand(time(NULL));
    for(int r=0; r<N; r++){
        cout << rand()%10 << "\n";
    }
    for(int r=0; r<N; r++){
        A[r] = r + rand()%100;
        cout << A[r] << " ";
    }

    for(int r=0; r<N; r++){
        for(int c=0; c<N-1; c++){
            if(A[c] > A[c+1]){
                int tmp = A[c];
                A[c] = A[c+1];
                A[c+1]=tmp;
                isSorted=false;
            }
        }
        if(isSorted) {break;}
    }

    cout << "\n";

    for(int r=0; r<N; r++){
        cout << A[r] << " ";
    }

}