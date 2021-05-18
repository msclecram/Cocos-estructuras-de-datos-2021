#include <iostream>
using namespace std;

int main() {
    int floors;
    cout << "Enter the number of floors for the pyramid: ";
    cin >> floors;
    
    char empty=' ';
    char brick='A';
    int brickWidth = 1;
    
    for(int i = floors; i > 0; i--){
        for(int k = 0; k < i; k++) { cout << empty; }
        for(int j = 0; j < brickWidth; j++) { cout << brick; }
        for(int k = 0; k < i; k++) { cout << empty; }
        brickWidth += 2;
        cout << "\n";
    }return 0;
}
/*
int PiramideV2 (int height){
    char empty=' ';
    char brick='A';
    int width=(height*2)+1;
    int brickWidth = 1;
    
    for(int i = height; i > 0; i--){
        for(int k = 0; k < i; k++) { cout << empty; }
        for(int j = 0; j < brickWidth; j++) { cout << brick; }
        for(int k = 0; k < i; k++) { cout << empty; }
        brickWidth += 2;
    }
    return 0;
}

int PiramideHC(){
    char bricks[10][21]={{'~','~','~','~','~','~','~','~','~','~','A','~','~','~','~','~','~','~','~','~','~'},
                         {'~','~','~','~','~','~','~','~','~','A','A','A','~','~','~','~','~','~','~','~','~'},
                         {'~','~','~','~','~','~','~','~','A','A','A','A','A','~','~','~','~','~','~','~','~'},
                         {'~','~','~','~','~','~','~','A','A','A','A','A','A','A','~','~','~','~','~','~','~'},
                         {'~','~','~','~','~','~','A','A','A','A','A','A','A','A','A','~','~','~','~','~','~'},
                         {'~','~','~','~','~','A','A','A','A','A','A','A','A','A','A','A','~','~','~','~','~'},
                         {'~','~','~','~','A','A','A','A','A','A','A','A','A','A','A','A','A','~','~','~','~'},
                         {'~','~','~','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','~','~','~'},
                         {'~','~','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','~','~'},
                         {'~','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','~'}};
    for(int i=0; i<10; i++){   
        for(int j=0;j<21;j++){
                cout<<bricks[i][j];
            }
            cout<<"\n";
    }
}
*/