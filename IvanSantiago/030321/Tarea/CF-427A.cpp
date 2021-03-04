#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int policeOfficers = 0;
    int unnatendedCrimes = 0;
 
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        policeOfficers += temp;//because for each crime (-1) a pollice officer is used and then disposed of, and for each 1 a police officer is hired
        
        //cout << endl << "policeOfficers is " << policeOfficers;

        if (policeOfficers < 0)
        {
            unnatendedCrimes++;
            policeOfficers = 0;
        }
        if (policeOfficers > 10)
        {
            policeOfficers = 10;
        }
        //cout << endl << "policeOfficers is " << policeOfficers << " after processing and there are " << unnatendedCrimes << " unnatendedCrimes";
    }
    cout << unnatendedCrimes;
    return 0;
    return 0;
}