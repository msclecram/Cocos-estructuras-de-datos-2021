#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "Hola";
    string t = "Esto es una prueba";

    string p = s + t + "Voy a escribir de nuevo" + s;

    char character = p[0];
    
    for( int i=0; i < p.size(); i++){
        p[i] = (p[i] - 'a') + 'A';

    }

    // Substring
    string x = p.substr(3, 12);

    // Find
    int indice = p.find("Voy");

    cout << indice << "\n";

    return 0;
}