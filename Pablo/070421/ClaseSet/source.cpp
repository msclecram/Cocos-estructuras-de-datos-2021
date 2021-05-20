#include <iostream>
#include <set>
#include <map>
#include <string>

int main()
{
	std::set< std::string > mySet;

	mySet.insert("hola");
	mySet.insert("coco");
	mySet.insert("gamecoder");
	mySet.insert("c++");
	mySet.insert("ue4");
	mySet.insert("unity");
	mySet.insert("c++");
	mySet.insert("unity");

	std::cout << "Tamano del set: " << mySet.size() << "\n";

	std::set< std::string >::iterator it;
	for (it = mySet.begin(); it != mySet.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << "\n";

	std::map< std::string, int > myMap;

	myMap["hola"] = 10;
	myMap["c++"] = 3;
	myMap["unity"] = 2;
	myMap["ue4"] = 8;

	std::cout << myMap["hola"] << "\n";
	std::cout << myMap["c++"] << "\n";
	std::cout << myMap["unity"] << "\n";
	std::cout << myMap["ue4"] << "\n";

	return 0;
}