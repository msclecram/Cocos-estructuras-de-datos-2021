#include <iostream>
using namespace std; 

int main()
{
	int n, participants;
    cout << "Enter the number of participants\n";	
	cin >> participants;
	for (int i = 0; i < participants; i++)
	{
        cout << "Enter 0 for EASY or 1 for HARD\n";
		cin >> n;

		if (n == 1)
		{
			cout << "HARD";
			return 0;
		}


	}
	if (n == 0)
	{
		cout << "EASY";
		return 0;
	}

}