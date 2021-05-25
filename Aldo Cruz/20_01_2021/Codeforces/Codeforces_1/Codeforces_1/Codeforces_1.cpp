// Codeforces_1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 

int main()
{
    int Limak, Bob;
    int count = 0;

    //Se piden los datos de estos dos
    cin >> Limak;
    cin >> Bob; 

    //Se nos dijo que el primero se multiplica en 3 y el otro en dos así que... 
    for (Limak, Bob; Bob >= Limak; Limak *=3, Bob *= 2)
    {
        //Cada vez que pasa una ronda se pasa este dato a count, fungiendo como los años. 
        count++;
       

    }
    if (Limak > Bob)
    {
        //Si el valor de Limak es mayor que el de Bob pues entonces despliega los años o count pues. 
        cout << count;
    }

 

}
