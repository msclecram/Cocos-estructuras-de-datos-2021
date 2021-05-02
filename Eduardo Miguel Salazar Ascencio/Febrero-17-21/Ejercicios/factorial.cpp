#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int  a = factorial(n-1) * n;
    return a;
}

int main()
{

}