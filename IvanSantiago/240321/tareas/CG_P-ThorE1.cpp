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
    while (lightX != initialTX || lightY != initialTY)
    {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();
        if(remainingTurns == 0)
        {
            break;
        }
        string newCoordinate = "";
        if(lightY > initialTY)
        {
            newCoordinate += "S";
            initialTY++;
        }
        else if(lightY < initialTY)
        {
            newCoordinate += "N";
            initialTY--;
        }

        if(lightX > initialTX)
        {
            newCoordinate += "E";
            initialTX++;
        }
        else if(lightX < initialTX)
        {
            newCoordinate += "W";
            initialTX--;
        }

        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << newCoordinate << endl;
    }
}