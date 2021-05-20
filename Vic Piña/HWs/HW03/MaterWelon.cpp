#include <iostream>
using namespace std; 

int main()
{
    int weight, result;
    cin >> weight; 
    result = weight / 2;
    if (weight % 2 == 0 && result % 2 == 0) { cout << "YES"; }
    else { cout << "NO"; }
}