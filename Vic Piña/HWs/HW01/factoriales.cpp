#include <iostream>
using namespace std;

int main() {
    int input, result;
    result = 1;
    cout<<"Enter a whole number to calculate it's factorial\n";
    cin>>input;
    for (int i = input; i > 0; i--)
    {
        result *= i;
    }
    cout<<"The factorial for your input is: " << result;
    return 0;
}