#include <iostream>
using namespace std;


int main()
{
    int magnets, inputMagnet;
    cout << "Enter the amount of magnets\n";
    cin >> magnets;
    int groups = 0;
    int prev = 0;
    
    for (int  i = 0; i < magnets; i++)
    {
        cout << "Enter the next magnet\n";
        cin >> inputMagnet;
        if (prev != inputMagnet)
        {
            groups++;
        }
        prev = inputMagnet;
    }
    cout << groups;
}