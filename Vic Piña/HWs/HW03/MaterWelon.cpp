#include <iostream>
using namespace std; 

int main()
{
    int weight;
    cout<<"Enter the weight of the fruit\n"; 
    cin >> weight; 
    if (weight % 2 == 0) { cout << "YES"; }
    else { cout << "NO"; }
}