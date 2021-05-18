#include <iostream>
using namespace std; 

int main()
{
    int Limak, Bob;
    int years = 0;

    cout<<"Enter Limak's weight\n";
    cin >> Limak;
    cout<<"Enter Bob's weight\n";
    cin >> Bob; 

    for (Limak, Bob; Bob >= Limak; Limak *=3, Bob *= 2)
    {
        years++;
    }
    if (Limak > Bob)
    {
        cout << "Years to reach more weight: " << years;
    }
}