
#include <iostream>
#include <string>
using namespace std;


int main()
{
    int problems, solved, solution;
    cin >> problems;
    int solutions = 0;

    for (int i = 0; i < problems; i++)
    {
        solved = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> solution;
            if (solution == 1) { solved++; }
        }
        if (solved >= 2) { solutions++; } 
    }
    cout << solutions;    
}