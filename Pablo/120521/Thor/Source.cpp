#include<iostream>
#include<vector>
#include<algorithm>

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

	int currentX = initialTX;
	int currentY = initialTY;

	// gameloop
	while (1)
	{
		int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
		cin >> remainingTurns; cin.ignore();

		int directionX = lightX - currentX;
		int directionY = lightY - currentY;

		// Write an action using cout. DON'T FORGET THE "<< endl"
		// To debug: cerr << "Debug messages..." << endl;

		if (directionX > 0 && directionY > 0)cout << "SE" << endl;
		if (directionX > 0 && directionY == 0)cout << "E" << endl;
		if (directionX > 0 && directionY < 0)cout << "NE" << endl;
		if (directionX == 0 && directionY < 0)cout << "N" << endl;
		if (directionX < 0 && directionY < 0)cout << "NW" << endl;
		if (directionX < 0 && directionY == 0)cout << "W" << endl;
		if (directionX < 0 && directionY > 0)cout << "SW" << endl;
		if (directionX == 0 && directionY > 0)cout << "S" << endl;

		// A single line providing the move to be made: N NE E SE S SW W or NW

		if (directionX!= 0)
			currentX += directionX / abs(directionX);
		if (directionY != 0)
			currentY += directionY / abs(directionY);
	}
}