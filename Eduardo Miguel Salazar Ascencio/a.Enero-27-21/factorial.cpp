#include <iostream>

using namespace std;

int result,
    startNumber = 10,
    remainingInts,
    lapsToDo;

int main()
{
    
    
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