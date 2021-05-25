#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;


int main()
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        cout << rand() % 10 << endl;
    }
    
}