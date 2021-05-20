#include <iostream>
#include<list>
using namespace std;

int main(){
    int input, temp;

    list<int> primeNums;

    bool prime, addNum;
    
    cout << "Enter a number to check if it is prime\n";
    cin >> input;
    if (input == 0 || input == 1) { prime = false; }
    if (input == 2) { prime = true; }
    else{
        for(int i = input; i > 1; --i){
            temp = i;
            for(int j = temp; j > 1; --j){
                if(temp % j == 0) { addNum = false; } 
                else { addNum = true; }
            }
            if(addNum && temp != input) { primeNums.push_front(temp); }
            if(input % i == 0) { prime = false; } 
            else { prime = true; }
        }
        primeNums.push_front(2);
    }
    if(prime) { cout << "Your number is prime\n"; } 
    else { cout << "Your number isn't prime\n"; }
    cout << "The prime numbers before yours are \n";
    list<int> :: iterator it;
    for(it=primeNums.begin();it!=primeNums.end();it++) {
        cout <<  *it << " ";
    }
    
}
