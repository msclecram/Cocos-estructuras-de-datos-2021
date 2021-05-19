#include <iostream>
#define maxTreeSize 51
#include <windows.h>

using namespace std;


int treeSize, 
    treeMiddle;


int main()
{
    
    treeSize = 19;

    treeMiddle = treeSize / 2;

    for (int i = 0; i < (treeSize / 2) + 1; i++)
    {
        for (int j = 0; j < treeSize; j++)
        {
            if (treeMiddle - i <= j && j <= treeMiddle + i)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN | BACKGROUND_INTENSITY);
                cout << '*';
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
            }
            else
            {
                cout << ' ';
            }
        }
        cout << "\n";
    }
}