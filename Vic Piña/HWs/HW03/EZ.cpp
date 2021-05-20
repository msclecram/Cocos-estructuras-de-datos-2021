#include <iostream>
using namespace std; 

int main()
{
	int n, participants;
	cin >> participants;
	for (int i = 0; i < participants; i++)
	{
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