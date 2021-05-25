#include <iostream>

using namespace std;

int result,
    startNumber = 10,
    remainingInts,
    lapsToDo;

int main()
{
    //Uncomment if code is required to go dynamic
    /*
    cout << "please input interger number bigger than 0 to factorize";
    cin >> startNumber;
    if (startNumber <= 0)
    {
        cout << "please input a number bigger than 0 next time.";
    }
    else if (startNumber == 1)
    {
        cout << "result is 1";
        return 0;
    }

    */
    
    result = startNumber;

    remainingInts = startNumber - 1;

    lapsToDo = remainingInts;

    for (int i = 0; i < lapsToDo; i++)
    {
        result *= remainingInts;

        remainingInts--;
    }

    cout << "Factorial of " << startNumber << " is " << result;

    return 0;
}