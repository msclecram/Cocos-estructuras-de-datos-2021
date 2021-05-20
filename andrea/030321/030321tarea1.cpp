#include <iostream>
using namespace std;

int main ()
{
    // "imanes" que se tienen
    int roundtotake;
    //Se ocupa para designar los grupos que se ocupan
    int groups = 0;
    // Crea mis espacios necesarios conforme al problema 
    //string array [100000];
    //Aquí guardamos lo que el contador obtiene con la polaridad de los imanes
    int previousvalue;

    //Recibe la información mi computadora
    cin >> roundtotake;

    //Aquí se repite el ciclo hasta llegar al valor definido
    for(int i = 0 ; i < roundtotake; i++)
    {
        int newvalue;
        cin >> newvalue;
        //Detector de diferencia de grupos
        if( newvalue != previousvalue)
        {
            groups ++;
            previousvalue = newvalue;
        }

        //cin >> array [i];
    } 
    //regresa el grupito
    cout << groups;

    /*for (int i = 0; i < variable; i++)
    {
        //Dentro de este for se hará un if que hace la comparación para poder poner en el contador (si son diferentes se irá al contador, si son iguales se seguirá)
        if(array[i] != array [i+1])
        {
            //El contador 
            counter ++;
        }
    }*/

    //Resulta mpreso
    //cout << counter;
}