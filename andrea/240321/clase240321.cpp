#include <iostream>
#include <list>
using namespace std;

int main()
{
    list < int > lista;
    lista.push_back(10);
    lista.push_front(2);
    lista.push_front(4);
    lista.push_front(15);

    //15, 2 10, 4
    //forward and backward
    //it++, it--  NO it+=5
    
    //iterator random
    for (list < int >:: iterator it = lista.begin(); it != lista.end(); it ++) 
    {
        cout << (*it) << "\n";
    }

    list < int >:: iterator it = lista.end();
    it--;

    for(;it != lista.begin(); it--)
    {
        cout << (*it) << "\n";
    }

    //cout << (*it) << "\n";
    //cout << lista.size() << "\n";
    return 0;

}
