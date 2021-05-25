#include <iostream>
using namespace std;

int main ()
{
    int Limak;
    int Bob;
    int year = 0;

    cin >> Limak >> Bob;

    //Se declara el valor de cada oso a cuanto aumenta su peso respectivamente y se introduce la variable de conteo de los años
    for (Limak, Bob ; Limak <= Bob ; Limak*= 3, Bob*= 2)
    {
        year++;
    }
    cout << year;





}
