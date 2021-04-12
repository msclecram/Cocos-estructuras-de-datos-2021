#include <iostream>
using namespace std;

int arr [1000];
int main()
{
    int n;
    int a,b,c;
    cin >> n;

    int *A =nullptr;

    A = new int[n];
    
    int res = 0;
    for ( int r=0;r<n;r++ )
    {
        cin >> a >> b >> c;
        if (a+b+c>=2 )
        res++;
    }
    cout << res;

    return 0;
}
