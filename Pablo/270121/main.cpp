#include <iostream>

using namespace std;

int main()
{
    // la variable facotrial va a ser en donde guardemos nuestros factoriales.
   int factorial =1;
    for(int i = 1; i <=10; i++) //aqui se repite el for hasta que ya no sea menos o sea igual que 10
    {
       
        factorial = i * factorial; // aqui multiplica el numero indice marcado con la variable i por el factorial del indice anterior
        cout << factorial << endl; // aqui se imprime el factorial con salto de linea
    }

   // el programa para imprimir la piramide
    for(int i = 0; i < 10; i++) // aqui va a ir recorriendo fila x fila la piramide
    {

       for(int j = 0; j <10 - i; j++) // aqui va imprimiendo espacios en todas las columnas de la fila a la vez que disminuye el rango restando el numero de filas
       {
           cout << " ";
       }
        for(int x = 0 ; x< 2*i - 1; x++) // se multiplica el numero de fila por 2 para tener el aumento equitativo de * por fila
        {
              cout << "*";
        }


       cout << "\n"; // da el salto a la siguiente fila
    }
    
    return 0;

}