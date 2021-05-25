#include <iostream>

using namespace std;

int main()
{
   //Años
    int a, b,
        c = 0; 
    cin >> a >> b;

    while (a <= b)
    {
        //Limak & Bob
        a *= 3; 
        b *= 2; 
        c++; 
    }

    cout << c;

    return 0;
}