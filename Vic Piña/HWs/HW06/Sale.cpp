#include <iostream>
#include <list>
using namespace std;

int main()
{
   int saleTV, bobTV;
   cin >> saleTV >> bobTV;
   int validTVs = 0;
   int profit = 0;
   list<int> tvPrices;
   list<int>::iterator price;
   

   for (int  i = 0; i < saleTV; i++)
   {
        int temp;
        cin >> temp;
        tvPrices.push_front(temp);
   }
   
   tvPrices.sort();
   price = tvPrices.begin();
   
    for (int  i = 0; i < saleTV; i++)
   {
        if (validTVs == bobTV)
        {
            break;
        }
        if (*price <= 0)
        {
            profit += *price;
            validTVs++;
        }
        price++;
   }
   cout << -profit;
}