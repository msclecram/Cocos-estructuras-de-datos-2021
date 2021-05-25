#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    list<int> lista;

    lista.push_back(10);
    lista.push_front(2);
    lista.push_back(4);
    lista.push_front(15);

    list<int>::iterator a = lista.begin();

    for (list<int>::iterator i = lista.begin(); i != lista.end(); i++)
    {
        cout << (*i) << endl;
    }
    cout << lista.size() << endl;
    return 0;
}