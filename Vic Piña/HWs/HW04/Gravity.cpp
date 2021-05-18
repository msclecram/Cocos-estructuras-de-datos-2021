#include <iostream>
#include <string>
#include <list>
using namespace std;


int main()
{
    list<int> cubes;
    list<int>::iterator cubesPlace;
    int columns;
    cout << "Enter the number of columns\n";
    cin >> columns;
    for (int i = 0; i < columns; i++)
    {
        int temp;
        cout << "Enter the value for the cube\n";
        cin >> temp;
        cubes.push_front(temp);
    }
    cubes.sort();
    cubesPlace = cubes.begin();
    cout << "Flipped\n";
    for (int i = 0; i < columns; i++)
    {
        cout << *cubesPlace << " ";
        cubesPlace++;
    }
    return 0;
}