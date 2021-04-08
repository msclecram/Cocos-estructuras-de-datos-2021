#include <map>
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <set>



int main()
{
    std::set<std::string> mySet;

    mySet.insert("ELONGATED MUSKRAT");
    mySet.insert("CLEM CLEM");
    mySet.insert("little meat");
    mySet.insert("eeeeeeeooooo");
    mySet.insert("pressure");
    mySet.insert("unity");

    std::cout << "Tamaño del set: " << mySet.size() << std::endl;
    std::set<std::string>::iterator it;

    for (it = mySet.begin(); it != mySet.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    
    std::cout << std::endl;

    std::map<std::string, int> myMap;

    myMap["hola"] = 10;
    myMap["C++"] = 3;
    myMap["unity"] = 2;
    myMap["ue4"] = 8;

    std::cout << myMap["hola"] << std::endl;
    std::cout << myMap["C++"] << std::endl;
    std::cout << myMap["unity"] << std::endl;
    std::cout << myMap["ue4"] << std::endl;

    return 0;
}