#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int neighboors = 0;
    char previousColor = 'A';
    string stoneArrays;
    cin >> stoneArrays;
    
    for (int  i = 0; i < n; i++)
    {
        char temp;
        temp = stoneArrays[i];
        if (previousColor == temp)
        {
            neighboors++;
        }
        previousColor = temp;
    }
    
    cout << neighboors;
    return 0;
}