#include <iostream>

using namespace std;

int f(int n, int r)
{
    if (n == 1)
    {
        return 0;
    }
    int a = f(n/r, r) +1;
    return a;
}

int main()
{
    cout << f(27,3);
    return 0;
}