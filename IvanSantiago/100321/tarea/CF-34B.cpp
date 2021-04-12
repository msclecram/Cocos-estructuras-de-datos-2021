#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;
   int validTVs = 0;
   int earnings = 0;
   list<int> tvPrices;
   list<int>::iterator tvp_Index;
   

   for (int  i = 0; i < n; i++)
   {
        int temp;
        cin >> temp;
        tvPrices.push_front(temp);
   }
   
   tvPrices.sort();
   tvp_Index = tvPrices.begin();
   
    for (int  i = 0; i < n; i++)
   {
        if (validTVs == m)
        {
            break;
        }
        if (*tvp_Index <= 0)
        {
            earnings += *tvp_Index;
            validTVs++;
        }
        tvp_Index++;
   }
   
   cout << -earnings;
   return 0;
   
    
}