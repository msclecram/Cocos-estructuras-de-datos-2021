#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int result;
    int positionToGet;

    cout << "Enter the position of the Finonacci chain you want to get: ";
    cin >> positionToGet;

    cout << "\n";

    if(positionToGet <= 0)
    {
        cout << "Please enter a positive number next time";
        return 0;
    }
    if(positionToGet <= 1)
    {
        cout << "FC at position 1 is 0.\n";
        return 0;
    }
    if(positionToGet <= 2)
    {
        cout << "FC at position 1 is 0.\n";
        cout << "FC at position 2 is 1.\n";
        return 0;
    }
    else
    {
        cout << "FC at position 1 is 0.\n";
        cout << "FC at position 2 is 1.\n";
    }
    

    for( int i = 0; i < positionToGet - 2 ; i++)
    {
        result = a + b;
        //3 is = 2 of the prevous laps + 1 for compesation of non-programming counting
        cout << "FC at position " << i + 3 << " is " << result << ".\n";
        //we move values, so that "a" has the previous value of "b", and "b" the value of result, 
        //so that the new values can calculate the next number
        //following the rule of "the number at [n] position is equal to the sum of its two antecesors, [n-1] and [n-2]"  
        a = b;
        b = result;
    }

    
}