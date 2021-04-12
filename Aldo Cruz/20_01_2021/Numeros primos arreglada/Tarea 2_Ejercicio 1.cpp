// Tarea 2_Ejercicio 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>
using namespace std; 

int i = 1;
int cont = 0;
int opc, num;
int other;

bool isPrimo(int i); 

int main()
{
    //Recuerda, un numero primo es aquel que solamente se puede dividir entre el mismo y entre 1.
    //Este resultado siempre debe salir como un numero entero. 
    //Declaro mis variables primo y num. 
   

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
            
            do
            {
                if (num % i == 0)
                {

                    cont++;

                }
                i++;


            } while (i <= num); 
            
            if (cont == 2)
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
       
        if (num > 2)
        {
            //Esta parte del codigo hace el conteo de numeros hasta llegar al numero ingresado
            for (num ; num > 0; num--)
            {

                if (isPrimo(num))
                {
                   
                }
            }
        
        }
        else
        {
            cout << num << "no es primo ahey"; 
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

bool isPrimo(int num)
{
    cont = 0; 
    i = 1; 
    
    do
    {
        if (num % i == 0)
        {
            cont++;
        }
        i++;

    } while (i <= num);

    if (cont == 2)
    {
        cout << num << " es primo. \n";
        cont = 0; 
        return true; 
    }
    else
    {
        cout << num << " no es primo. \n"; 
        cont = 0; 
        return false; 
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
