#include <iostream>
using namespace std;

long long n, m, a;

long long x, y;

int main()
{
    cin >> n >> m >> a;
    
    if (n%a == 0)
        x = n/a;
    else
        x = n/a+1;

    if (m%a == 0)
        y = m/a;
    else
        y = m/a+1;

    
    cout << x*y;    
}