#include <iostream>
using namespace std;


int main()
{
    int magnets, inputMagnet;
    cin >> magnets;
    int groups = 0;
    int prev = 0;
    
    for (int  i = 0; i < magnets; i++)
    {
        cin >> inputMagnet;
        if (prev != inputMagnet)
        {
            groups++;
        }
        prev = inputMagnet;
    }
    cout << groups;
}