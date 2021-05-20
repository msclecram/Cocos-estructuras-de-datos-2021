#include <iostream>
#include <string>

int main()
{
	std::string s,w = " ";

	std::cin >> s; 

	for (int i = 0; i < s.size(); i++)
	{
		
		if (s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i] != 'o' || s[i] != 'u' || s[i] != 'y' || s[i] != 'A' || s[i] != 'E' || s[i] != 'I' || s[i] != 'O' || s[i] != 'U' || s[i] != 'Y')
		{
			if (s[i] <= 'z' && s[i] >= 'a' && s[i])
			{
				s[i] -= 32;
				std::cout << '.' << s[i];
			}
			else if (s[i] <= 'Z' && s[i] >= 'A' && s[i])
			{

				std::cout << '.' << s[i];
			}
		}
	}

	std::cout << "\n";

	return 0;
}