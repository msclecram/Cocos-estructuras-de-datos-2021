#include <iostream>
using namespace std;

//POLICE RECRUITS
int main ()
{
    //Se declara la variable para que el ususario introduzca la información
    int nround;
    //Se recibe la información del usuario
    cin >> nround;
    int policeman =0;
    int crimesnotcatered =0;

    //Se hace el for para el número de rondas a realizar otorgadas por el ususario
    for (int i=0; i < nround; i++)
    {
        //Variable para poder introducir la información
        int space;
        //Recibe el cambio
        cin >> space;
        //Se hace la suma 
        policeman += space;
        //Si el resultado de eso es negativo se suma a los crímenes no vistos
        if (policeman < 0)
        {
            crimesnotcatered ++;
            policeman =0;
        }
    }
    //Al terminar las rondas se muestra los crímenes que no se atendieron
    cout << crimesnotcatered;
    return 0;
}