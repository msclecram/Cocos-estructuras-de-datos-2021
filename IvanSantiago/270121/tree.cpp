#include <iostream>
#define maxTreeSize 51
#include <windows.h>

using namespace std;


int treeSize, 
    treeMiddle;


int main()
{
    //Uncomment to make code dynamic (custom tree size)
    /*
    cout << "Input your tree size (odd, not bigger than " << maxTreeSize << "): ";
    cin >> treeSize;
    cout << "\n";
    
    if (treeSize > maxTreeSize)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);//Put text in a yellow BG
        cout << "WARNING: size is bigger than 25, reducing it to such\n\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);//return BG color to black
    }
    else if (treeSize % 2 == 0)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);//Put text in a yellow BG
        cout << "WARNING: requested size is not an odd number, reducing size to " << treeSize - 1 << "\n\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);//return BG color to black
        treeSize -= 1;
    }
    */

    //Comment lone below ONLY, to make code dynamic (custom tree size)
    treeSize = 19;

    treeMiddle = treeSize / 2;

    for (int i = 0; i < (treeSize / 2) + 1; i++)
    {
        for (int j = 0; j < treeSize; j++)
        {
            if (treeMiddle - i <= j && j <= treeMiddle + i)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN | BACKGROUND_INTENSITY);//Put text in a green BG
                cout << '*';
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);//return BG color to black
            }
            else
            {
                cout << ' ';
            }
        }
        cout << "\n";
    }
}