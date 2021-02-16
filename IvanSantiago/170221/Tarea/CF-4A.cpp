#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;

    if (w % 2 == 1) //if weight is odd
    {
        cout << "NO";
    }
    else
    {
        if ((w / 2) % 2 == 0) //if the half divided by half is even
        {
            cout << "YES";
        }
        else  if (((w / 2) + 1) % 2  == 0 && ((w / 2) -1) != 0) //if we take an odd part to add it to the other part (while keeping it greater than 0), 
                                                                //and this addition gives us an even number
        {
           cout << "YES"; 
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}