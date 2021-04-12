#include <iostream>
using namespace std;

int main ()
{
    int n;

    cin >> n;
    char c;
    int ascore= 0;
    int dscore= 0;

    for (int r=0; r<n; r++)
    {
        cin >> c;
        if ( c == 'A')
        {
            ascore ++;
        }
        else{
            dscore ++;
        }
    }

    if (ascore > dscore)
    {
        cout << "Anton";
    }
     if (ascore < dscore)
    {
        cout << "Danik";
    }
     if (ascore == dscore)
    {
        cout << "Friendship";
    }
    return 0;
}



















