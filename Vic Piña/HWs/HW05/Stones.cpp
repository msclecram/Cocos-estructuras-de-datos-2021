  
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int stones;
    cin >> stones;
    int adjacentStones = 0;
    char colour;
    string stoneColours;
    cin >> stoneColours;
    
    for (int  i = 0; i < stones; i++)
    {
        char temp;
        temp = stoneColours[i];
        if (colour == temp)
        {
            adjacentStones++;
        }
        colour = temp;
    }
    cout << adjacentStones;
}