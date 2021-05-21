# include <iostream>
# include <list>
using namespace std;

int main ()
{
    //Variable para la cantidad de filas que pone el ususario
    int nrows;
    //Se recibe la información del ususario
    cin >> nrows;

    //Se crea una lista de espacios para poder ordenar
    list <int> array;
    //Se crea el apuntador
    list <int> :: iterator arrayindex;
    //La cantidad de vueltas que se hacen por las filas dadas
    for(int i=0; i < nrows; i++)
    {
        //Variable para el espacio temporal
        int temspace;
        //Recibe lo que se puso en el espacio
        cin >> temspace;
        //Hace que lo envie al primer espacio 
        array.push_front(temspace);
    }
    //Ordena las cantidades
    array.sort ();
    //El apuntador va al inicio de la lista
    arrayindex = array.begin ();
    //Se hacen las vueltas para imprimir los caracteres ya ordenados
    for(int a=0; a < array.size (); a++)
    {
        cout << *arrayindex << endl;
        arrayindex ++;
    }

}