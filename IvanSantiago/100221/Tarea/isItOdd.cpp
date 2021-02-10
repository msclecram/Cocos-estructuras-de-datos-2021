#include <iostream>
using namespace std;

int main()
{
    //set variable to save input value
    int n;

    //ask for the value of this number
    cout << "Type the number you want to check: ";

    //save input
    cin >> n;

    //if the modulus of n % 2 is 1, it's an odd number. Otherwise, it's an even number
    if (n % 2 == 1)
    {
        cout << n << " is an odd number";
    }
    else
    {
        cout << n << " is an even number";
    }
    
    return 0;
}