#include <iostream>
using namespace std;

int main() {
    int factorial;
    for(int i=0;i>10;i++){
        factorial=i;
        for(int j=0; j>i; j++){
            factorial*=i*j;
        }
        cout<<factorial;
    }
    return 0;
}