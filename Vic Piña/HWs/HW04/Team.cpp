
#include <iostream>
#include <string>
using namespace std;


int main()
{
    int problems, solved, solution;
    cout << "Enter the amount of problems\n";
    cin >> problems;
    int solutions = 0;

    for (int i = 0; i < problems; i++)
    {
        solved = 0;
        cout << "Enter 1 if you can solve it or 0 if you can't\n";
        for (int j = 0; j < 3; j++)
        {
            cout << "Participant " << j << "\n";
            cin >> solution;
            if (solution == 1) { solved++; }
        }
        if (solved >= 2) { solutions++; } 
    }
    cout << "Solved problems " << solutions;    
}