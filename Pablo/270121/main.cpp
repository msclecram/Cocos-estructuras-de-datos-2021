#include <iostream>

using namespace std;

int main()
{
   int factorial =1;
    for(int i = 1; i <=10; i++)
    {
       
        factorial = i * factorial;
        cout << factorial << endl;
    }

   
    for(int i = 0; i < 10; i++)
    {

       for(int j = 0; j <10 - i; j++)
       {
           cout << " ";
       }
        for(int x = 0 ; x< 2*i - 1; x++)
        {
              cout << "*";
        }


       cout << "\n";
    }
    
    return 0;

}