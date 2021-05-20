#include <iostream>
using namespace std; 

int main()
{
    int Limak, Bob;
    int years = 0;

    cin >> Limak;
    cin >> Bob; 

    for (Limak, Bob; Bob >= Limak; Limak *=3, Bob *= 2)
    {
        years++;
    }
    if (Limak > Bob)
    {
        cout << years;
    }
}