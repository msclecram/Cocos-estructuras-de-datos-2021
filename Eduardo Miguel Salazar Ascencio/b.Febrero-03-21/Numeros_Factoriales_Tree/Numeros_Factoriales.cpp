#include <iostream>
using namespace std;

int main()
{
    //Se delcara número que se quiere factorizar

    int numberToFactorize = 10;
    int result;
    result = 10;

    //Se reduce el valor 

    numberToFactorize--;

    //Se declara para que el proceso ocurra por sí solo

    for (numberToFactorize; numberToFactorize > 0; numberToFactorize--)

    {
        //El resultado se multiplica por numberToFactorize

        result *= numberToFactorize;
    }

    //Se saca el resultado

    cout << "The factorial of 10 is " << result;
    return 0;
}