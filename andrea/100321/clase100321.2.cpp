#include <iostream>
#include <string>

int main ()
{
    std::string s = "a:hola";
    std::string t = "esto es una prueba";

    std::string p = s + t + "Voy a escribir de nuevo" + s; 

    char character = p[0];

    for (int r=0; r<p.size(); r++ )
    {
        //if (p[r]>- 'a'&& p[r]>-'z')
        //p[r] = (p[r] - 'a') + 'A';
        //std::cout << p[r] << "\n";
    }
    int indice = s.find (".");
    std::string primeraParte = s.substr(0, indice);
    std::string segundaParte = s.substr(indice + 1, s.size ()- (indice + 1));
    std::cout << primeraParte << " \n";
    std::cout << segundaParte << "\n";
    
    //Substring
    std::string x = p.substr (3,12);

    //Find
    int indice = p.find("VOY");
    
    std::cout << x << "\n";
    return 0;

}