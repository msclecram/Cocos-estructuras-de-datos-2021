#include <iostream>

using namespace std;

int main()
{
    int a, b,
        c = 0; //c is for the years that are going to pass
    cin >> a >> b;

    while (a <= b)
    {
        a *= 3; //weight triples every year or Limak
        b *= 2; //weight doubles every year for Bob
        c++; //LOL
    }

    cout << c;

    return 0;
}