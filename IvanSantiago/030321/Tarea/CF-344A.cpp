#include <iostream>
#include <string>
#include <list>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int groups = 0;
    int previousMagnet = 0;
    
    for (int  i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (previousMagnet != temp)
        {
            groups++;
        }
        previousMagnet = temp;
    }
    
    cout << groups;
    return 0;
}
