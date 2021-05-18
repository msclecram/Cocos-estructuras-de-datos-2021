#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

#define N 10
#define M 15

int A[N];
int bucket[M];

void Bucketsort(int *array, int n){
    for(int r=0; r<M;r++){
        bucket[r] = 0;
    }
    for(int r=0; r<n;r++){
        bucket[array[r]]++;
    }
}