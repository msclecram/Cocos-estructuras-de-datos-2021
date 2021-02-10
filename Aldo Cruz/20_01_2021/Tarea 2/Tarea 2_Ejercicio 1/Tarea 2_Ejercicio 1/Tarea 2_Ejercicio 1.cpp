// Tarea 2_Ejercicio 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>
using namespace std; 

int main()
{
    //Recuerda, un numero primo es aquel que solamente se puede dividir entre el mismo y entre 1.
    //Este resultado siempre debe salir como un numero entero. 
    //Declaro mis variables primo y num. 
    int primo = 1, noprimo = 2, num, opc;
    int cont = 2, bandera = 1; 

    cout << ("Hola! Porfavor elige alguna de mis opciones :) \n");
    cout << ("\n1. Determinacion de numero primo \n 2. Determinacion y antecedente de numero primo \n\n");
    cin >> opc; 
    system("CLS");
    switch (opc)
    {
    case 1: 
    {
        cout << ("\nDame un numero para determinar si es primo\n");
        cin >> num; 
        system("CLS");

        //En el caso del 2 cambia un poco la regla, ya que si hago el modulo de este pues me queda igual a 0.
        
            //Me puse a recordar lo que aprendimos con nuestra maestra en su momento, lo que básicamente se reduce a simplifica las cosas,
            //ya que en este caso pude haber puesto las dos condiciones de un primo ( al menos las basicas ) y ser algo como num/ num ==1 y num/ primo == num, pero esto es redundante. 
            //Así que tomando lo que recorde y lo de la clase pasada me enfoque en los modulos, ya que así no necesito hacer instrucciones muy largas o simplemente muchas. 
            //Tambien tomando la logica de los numeros primos podríamos determinar uno si no tiene un decimal.
        if (num > 2)
        {
            int i = 1;
            while (i < 4)
            {
                if (num % i == 0)
                {

                    cont++;

                }
                else
                {
                    cont--;
                }
                i++;


            }
            if (cont < 2)
            {
                cout << num << " es primo. \n";
            }
            else
            {
                cout << num << " no es primo. \n";
            }
        }
        else
        {
            cout << num << " no son primos"; 
        }
    }
    break; 

    case 2:
    {
        cout << ("\nDame un numero para determinar si es primo y sus anteriores numeros \n");
        cin >> num;
        system("CLS");

           
            //Esta parte del codigo hace el conteo de numeros hasta llegar al numero ingresado
        for (int i = 2; i <= num; i++)
        {
            //En esta parte del codigo están las condiciones para determinar que numero es primo o compuesto, 
            

            while (cont <= i / 2 && bandera == 1)
            {
                if (i % cont == 0)
                {
                    //si bandera da 0, entonces eso significa que el numero es compuesto, y por lo tanto no se toma, y se aumenta en cont para seguir con el conteo.
                    bandera = 0;
                }

                cont++;
            }

            //si bandera es 1 entonces el numero es primo y se imprime. 
            if (bandera == 1)
            {
                cout << i << " ";
            }
        }

            
        
         
        
    }
        break; 
    case 0:
    {
        return 0;
    }
        break; 
    }

  
}
//Y bueno, esta es una forma más simplificada de hacerlo, aunque tambien se podría hacer algo así: 
            /*
                do
                {
                    for(i = 1 ;i <= 4;i++)
                    {

                            if(i % num == 0)
                            {

                                reserv++
                            }


                     }
                     if(reserv <= 2)
                        {
                            cout << i << " ";
                        }


                    cont++;

                }while(cont <= num);
                */
