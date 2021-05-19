#include <iostream>
#include <string>

int main()
{
    std::string s;

    std::cin >> s;

    //char caracter = p[0];

    for ( int r=0;r<s.size(); r++)
    {
        //if (p[r]>='a' && p[r]<='z' )
        //p[r] = (p[r] - 'a') + 'A';
        std::cout << (int)p[r] << "\n";
    }

    cadena " hola coco";
    std::string subcadena = cadena.substr(5, 4);
    int indice = s.find(".");
    std::string primeraParte = cadena.susbstr(0, indice);
    std::string segundaParte = cadena.substr(indice+1, cadena.size() - (indice+1) );
    std::cout << primeraParte << "\n";
    std::cout << segundaParte << "\n";

    //Substring
    //std::string x = p.substr(3, 12);

    //Find
    //int indice = p.find("VOY");
    
    std::cout << indice << "\n";
    return 0;

}