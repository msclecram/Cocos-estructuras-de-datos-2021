#include <iostream>
using namespace std;

int main()
{
    //we have the humber that we want to factorize, 10
    int numberToFactorize = 10;
    
    //we'll declare this variable to save our results
    int result;

    //we will assign "result" the value of "number to factorize" because tecnically, this operations start
    //with the same number we want to factorize; in this case, 10
    result = 10;

    //now, we reduce the value of the number to factorize, for recursiveness purposes
    numberToFactorize--;

    //we now make an inverse for, so that the reduction of "number to factorize" occurs automatically
    for (numberToFactorize; numberToFactorize > 0; numberToFactorize--)
    {
        //under this premise, "result" will be multiplied by the number in "numberToFactorize",
        //which automatically reduces itself every lap, which coincidentally makes something like 10*9*8...*1
        result *= numberToFactorize;
    }

    //and now we print our result
    cout << "The factorial of 10 is " << result;
    return 0;
}