// CodeForces7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 


int main()
{
    int n; 
    string array[100000]; 
    int count = 0; 
    
    //Toma el dato de los magnetos
    cin >> n; 

    //Con esto hacemos el llenado de datos de cada magneto 
    for(int i = 0; i < n; i++)
    {
        cin >> array[i]; 
    
    }

    for (int i = 0; i < n; i++)
    {
        //En esta condicional verificamos si el array actual y el que le siguen tienen diferencia, para que en caso de ser así le aumente uno mas al contador y pueda seguir. 
        if (array[i] != array[i + 1])
        {
            //El contador 
            count++; 
            
        }
      
    }

    //Despliega el resultado
    cout << count; 
}

