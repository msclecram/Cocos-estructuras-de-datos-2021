#include <iostream>

using namespace std;

int main()
{

  // Es el primer problema solo que no me dejo agregar mas files visual studio code  
  /*  int a, b, contador;

    cin >> a;
    cin >> b;
   
    for(int i = 0; i<=20; i++)
    {
        a = a * 3;
        b = b * 2;
        contador ++;
        
        if(a>b)
        {
            cout << contador;
            i = 20;
        }
    }*/

    //Este es el segundo problema
    int n = 0, p = 0, contador = 0;

    cin >> n;
    
    for(int i = 0; i <= n; i++)
    {
        cin >> p;

        if( p != 0)
        {
            contador ++;
        }
       
    }

    if(contador > 0)
    {
        cout << "HARD";
    }
    else if(contador == 0)
    {
        cout << "EASY";
    }

    return 0;
}