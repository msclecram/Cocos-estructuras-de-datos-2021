# include <iostream>
# include <list>
using namespace std;

//SALE
int main()
{
    //Se declaran los valores para n (teles que cmpra), m (teles que puede cargar)
    int numtv;
    int numtvcarry;
    //Se van a guardar dichas "ganancias", suma de negativos
    int costs = 0;
    //Las tv's compradas
    int currenttv = 0;

    //Donde se guardan los valores en la cantidad de espacios dados en la lista
    list <int> array;
    //Se crea un apuntador que se basa en la lista de ints dados
    list <int> :: iterator arrayindex;

    //La computadora guarda los datos otorgados por el ususario
    cin >> numtv >> numtvcarry;

    //Se hace un for para la cantidad de vueltas a dar
    for(int i=0; i < numtv; i++)
    {
        //Se declara los costos de cada tv
        int tvcost;
        //La computadora guarda los datos otorgados por el ususario
        cin >> tvcost;
        //Busca si el costo es negativo para poder sumarlo al costo total
        if (tvcost < 0)
        {
            //Guardar negativos en dichos espacios de la lista
            array.push_front (tvcost);
        }
    }
    //Le pido que arregle mi array=lista
    array.sort();
    //Ahora le pido que se vaya al inicio de mi lista para que inicie en el incio, vaya la redundancia
    arrayindex = array.begin ();
    //El número de negativos que serán las vueltas que dará
    for(int i=0; i < array.size(); i++ )
    {
        //Suma de los negativos
        costs += *arrayindex;
        //Agrega las tv cargadas
        currenttv ++;
        //Si ya termino con la cantidad de tv que puede cargar, se termina el ciclo
        if (currenttv == numtvcarry)
        {
            break;
        }
        //Si no ha terminado sigue el ciclo
        arrayindex ++;
    }
    cout << -costs;
}