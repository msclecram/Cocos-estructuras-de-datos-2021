#include <iostream>
using namespace std;

int fibo (int n)
{
    if (n==0)
    return 0;
    if (n==1)
    return 1;

    int a= fibo(n-1);
    int b= fibo(n-2);

    return a + b;
}

int main ()
{
    cout << fibo (10);
    return 0;
}

//0 1 2 3 4 5 6  7  9 
//0 1 1 2 3 5 8 13 21

//f(4) = 3= 2+1 = f(3) + (2)
//f(n) = f(n-1) + f(n-2)

/* int factorial (int n)
{
    if (n==1)
    return 0;

    int a = factorial (n-1) * 1;
    return a; 
}

int main (
    {
        cout << factorial (3);
        return 0;
    }
)
*/

/* int factorial (int n)
{
    if (n==1)
    return 0;

    int a =f (n/r, r) +1;
    return a; 
}

int main (
    {
        cout << f (27,3);
        return 0;
    }
)
*/
