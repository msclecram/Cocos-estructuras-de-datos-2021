#include <iostream>
using namespace std;

//TEAM
int main ()
{
    //Variable para el número de problemas  
    int nproblems;
    //Dato que la computadora obtiene de la información que otorga el ususario
    cin >> nproblems;
    //Variable para el número de problemas que podrán solucionar
    int nsolutions = 0;
   
    //El número de vueltas que dará por cada problema
    for (int i=0; i < nproblems; i++)
    {
        //Variable para los votos que se obtienen
        int votes = 0;
        //Variable para el valor de cada voto
        int uniquevote;
        //Se hacen las vueltas para analizar el voto
        for (int a=0; a < 3; a++)
        {
            cin >> uniquevote;
            //Si el voto es 1 se le sumará a los votos totales
            if(uniquevote == 1)
            {
                votes ++;
            }
        }
        //Si los votos son mayores a 2 se toma como un roblema a solucionar por el equipo
        if (votes >= 2)
        {
            nsolutions ++;
        }
    }
    //Se imprime cuantos problemas pueden solucionar
    cout << nsolutions;
    return 0;

}