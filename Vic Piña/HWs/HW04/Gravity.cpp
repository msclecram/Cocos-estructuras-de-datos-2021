#include <iostream>
#include <string>
#include <list>
using namespace std;


int main()
{
    list<int> cubes;
    list<int>::iterator cubesPlace;
    int columns;
    cin >> columns;
    for (int i = 0; i < columns; i++)
    {
        int temp;
        cin >> temp;
        cubes.push_front(temp);
    }
    cubes.sort();
    cubesPlace = cubes.begin();
    for (int i = 0; i < columns; i++)
    {
        cout << *cubesPlace << " ";
        cubesPlace++;
    }
    return 0;
}