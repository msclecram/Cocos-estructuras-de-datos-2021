#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int tempSave;

    for (int i = 0; i < n; i++)
    {
        cin >> tempSave;
        if (tempSave == 1)
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}