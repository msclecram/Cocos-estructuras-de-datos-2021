  
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int stones;
    cout<<"Enter the amount of stones\n";
    cin >> stones;
    int adjacentStones = 0;
    char colour;
    string stoneColours;
    cout << "Enter the colour of each stone, R for red, B for blue, G for green\n";
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