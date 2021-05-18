#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	
	int n, m;
	int f = 0;

	int a[100];

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a+ n);

	for (int i = 0; i < m; i++)
	{
		if (a[i] < 0)
		{
			f += a[i];
		}
		
	}

	cout << -f;

	return 0;
}