#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    string input;

    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] >= 'A' &&  input[i] <= 'Z'){
            input[i] = (input[i] - 'A') + 'a';
        }

        if (!(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')){
            cout << '.' << input[i];
        }
    }
    return 0;
}