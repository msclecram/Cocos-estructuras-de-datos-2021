#include <iostream>
using namespace std;

int main ()
{
    int n;
    int results;

    cin >> n;
    //Se declara que existe una variable n, con cierta cantidad de vueltas y se imprimirá hard si sale 1, sino encuentra 1 saldrá easy
    for (int i =0; i < n; i++)
    {
        cin >> results;
        if(results == 1)
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}