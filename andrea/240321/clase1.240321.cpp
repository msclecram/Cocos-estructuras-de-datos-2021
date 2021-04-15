#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector < int > v;
    v.reserve(2048);
    for (int r=0; r>10; r++)
    {
        cout << "Valores guardados: " << v.size() << "\n";
        cout << "Capacidad reservada: " << v.capacity() << "\n";
        cout << "------------------------- \n: ";
        v.push_back(r);
    }

    /*int arr[10];
    arr[0] = 5;
    arr[1] = 10;
    arr[4] = 3;
    int* arr2 = arr + 4;
    cout << arr << " " << (*arr);
    cout << "\n";
    cout << arr << " " << (*arr2);
    cout << "\n";
    vector < int >::iterator it= v.begin();
    cout << "iterador inicial: " << (*it) << "\n";*/

    //iterator tipo random
    vector < int >::iterator it = v.begin();
    //it += 5;
    //v.erase (it);

    sort(v.begin() + 5, v.end() );
   
    for(int r= 0; r<v.size(); r++)
    {
        cout << v[r] << " ";
    }

    vector < vector <int> > matrix;

    for(int r=0; r<10; r++)
    {
        vector <int> array;
        for(int c=0; c< r; c++)
        {
            array.push_back(c);
        }

        matrix.push_back(array);
    }
    cout << "\n";
    for(int r=0; r< matrix.size(); r++)
    {
        for (int c=0; c< matrix[r].size(); c++)
        {
            cout << matrix[r][c] << " ";
        }
        cout << "\n";
    }

    return 0;
}