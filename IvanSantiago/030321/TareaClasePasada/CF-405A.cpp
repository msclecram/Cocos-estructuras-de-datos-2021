#include <iostream>
#include <string>
#include <list>
using namespace std;


int main()
{
    list<int> n;
    list<int>::iterator nIndex;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        n.push_front(temp);
    }
    n.sort();
    nIndex = n.begin();
    for (int i = 0; i < m; i++)
    {
        cout << *nIndex << endl;
        nIndex++;
    }
    return 0;

    /*
    solo para demostrar que sí sé lo que quería el problema realmente,
    3 4 6 9 7 8     3 4 6 7 8 9

    1 1 1 1 1 1     1 1 1 1 1 1
    1 1 1 1 1 1     1 1 1 1 1 1
    1 1 1 1 1 1     1 1 1 1 1 1
    0 1 1 1 1 1     0 1 1 1 1 1
    0 0 1 1 1 1     0 0 1 1 1 1
    0 0 1 1 1 1     0 0 1 1 1 1
    0 0 0 1 1 1     0 0 0 1 1 1
    0 0 0 1 0 1     0 0 0 0 1 1
    0 0 0 1 0 0     0 0 0 0 0 1
    
    */
}