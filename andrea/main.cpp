#include <iostream>
using namespace std;


int main ()
{
    int numone= 0;
    int numtwo= 1;
    int fibo;
    
    for (int i = 0; i<9 ; i++)
    {
        fibo = numone + numtwo;
        numone = numtwo; 
        numtwo = fibo;
    }
    
    cout << fibo << "\n";
    return 0;
}
