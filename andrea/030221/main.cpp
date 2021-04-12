#include <stdio.h>
#include <iostream>
using namespace std;

//Números factoriales 
/*int main ()
{
    //Variables declaradas.
    int value;
    int pvariable;
    int result;
    int round;
    
    //Instrucción.
    cout << " Can you give me the number that you want to factorize of 1 to 10? "; cin >> value;

    //Se analiza si el número es 1. 
    if (value == 1)
    {
       cout <<"The factorial number is 1";
       return 0; 
    }

    //Se guarda el valor principal, se guarda el número por el que se multiplicará y se guarda el número de rondas.
    result= value;
    pvariable = value -1;
    round = pvariable;

    //Se indica cómo será el proceso y al final pvariable se le restará para repetir el procedimiento, finalizará al completar el número de rondas.
    for (int i= 0 ; i < round ; i++)
    {
        result *= pvariable;
        pvariable -- ;
    }
    
    cout <<"The factorial number is \n" << result ; return 0;
}*/

//Pirámide
int main ()
{
    //Variables declaradas.
    int value;
    int level;

    //Instrucción.
    cout << "For your pyramid, can you give me a number?"; cin >> value;

    // Se indica como se manejará el valor dado para crear la pirámide.
    for (level = 0; level <= value; level++)
    {
        for (int i= value; i > level; i--)
        {
            cout << (" ");
        }
        for (int l= 0; l < level + 1; l++)
        {
            cout << (" *");
        }
        cout << ("\n");
    
    }
}
