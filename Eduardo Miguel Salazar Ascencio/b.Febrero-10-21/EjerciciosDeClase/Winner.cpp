#include <iostream>
using namespace std;




int main()
{
    int numberOfRounds;
    cin >> numberOfRounds;

    char winnerOfRound;
    int antonScore = 0;
    int danikScore = 0;

    for (int i = 0; i < numberOfRounds; i++)
    {
        cin >> winnerOfRound;
        if (winnerOfRound == 'A')
        {
            antonScore++;
        }
        else
        {
            danikScore++;
        }
    }
    
    if (antonScore > danikScore)
    {
        cout << "Anton";
    }
    else if (danikScore > antonScore)
    {
        cout << "Danik";
    }
    else
        cout << "Friendship";
    
    return 0;
}