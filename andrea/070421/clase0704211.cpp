#include <iostream>
#include <set>
#include <map>
#include <string>

int main()
{
    std::set <std::string> mySet;
    mySet.insert("hola");
    mySet.insert("coco");
    mySet.insert("gamecoder");
    mySet.insert("c++");
    mySet.insert("ue4");
    mySet.insert("unity");
    mySet.insert("c++");
    mySet.insert("unity");

    std::cout << "Tamaño del set: " << mySet.size() << "\n";

    std::set <std::string> ::iterator it;
    for (it = mySet.begin(); it!= mySet.end(); it++)
    {
        std::cout<< *it << " ";
    }
    std::cout << "\n";

    std::map <std::string, int> myMap;
    myMap["pablo"]= 1500;
    myMap["andrea"]= 2000;
    myMap["marcel"]= 500;
    myMap["eli"]= 1800;

    std::cout << myMap["pablo"] << "\n";
    std::cout << myMap["andrea"] << "\n";
    std::cout << myMap["marcel"] << "\n";
    std::cout << myMap["eli"] << "\n";

    myMap ["eli"] = 2500;

    std::cout<< myMap["eli"] << "\n";
    //myMap.count ("eli");
    return 0;
}