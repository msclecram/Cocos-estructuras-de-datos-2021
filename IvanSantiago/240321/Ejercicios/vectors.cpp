#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;

    v.reserve(2048);
    for(int r = 0; r < 10;r++)
    {
        cout << "Valores guardados: " << v.size() << endl;
        cout << "Capacidad reservada: " << v.capacity() << endl;
        cout << "---------------------\n";
        v.push_back(rand()% 10);
    }

    vector<int>::iterator i = v.begin();
    sort(v.begin(), v.end());

    for (int r = 0; r < v.size(); r++)
    {
        cout << v[r] << " ";
    }

    vector< vector<int> > matrix;

    for (int i = 0; i < 10; i++)
    {
        vector<int> array;
        for (int  c = 0; c < i; c++)
        {
            array.push_back(c);
        }
        matrix.push_back(array);
    }
    
    cout << endl;

    for (int i = 0; i < matrix.size(); i++)
    {
        for(int c = 0; c<matrix[i].size(); c++)
        {
            cout << matrix[i][c] << " ";
        }
        cout << endl;
    }
    

    v.clear();
    return 0;
}