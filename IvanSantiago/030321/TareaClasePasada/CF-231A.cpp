#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int p = 0;

    for (int i = 0; i < n; i++)
    {
        int m = 0; //the variable where we will store the solvable numbers
        int e;//where we will store the evaluations of the three friends
        for (int j = 0; j < 3; j++)
        {
            cin >> e;
            if (e == 1) //if this jude can solve the problem, increase counter
            {
                m++;
            }
            
        }
        if (m >= 2) //if the counter says that at least two judges can give a solution to the problem, tell that one more problem will be written
        {
            p++;
        } 
    }
    cout << p;
    return 0;
    
}