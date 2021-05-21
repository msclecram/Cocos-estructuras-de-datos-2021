#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();

    // game loop
    while (1) 
    {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();

        //Movements 
        if(remainingTurns == 0)
        {
            break;
        }
        
        //For each if, we have a comparation with the position of light and the position of thor in Y
        if(lightY > initialTY)
        {
            cout << "S";
            initialTY++;
        }
        else if(lightY < initialTY)
        {
            cout << "N";
            initialTY--;
        }

        //For each if, we have a comparation with the position of light and the position of thor in X
        if(lightX > initialTX)
        {
            cout << "E";
            initialTX++;
        }
        else if(lightX < initialTX)
        {
            cout << "W";
            initialTX--;
        }

        //Write an action using cout. DON'T FORGET THE "<< endl"
        //To debug: cerr << "Debug messages..." << endl;
        //A single line providing the move to be made: N NE E SE S SW W or NW
        //We indicate the end of the code
        cout << endl;
    }

      
   
}