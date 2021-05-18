#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    //v.reserve(2048);
    for(int i=0; i<10; i++){
        cout << "Stored values: "<<v.size()<<"\n";
        cout<<"Capacidad reservada: "<<v.capacity()<<"\n";
        cout<<"-----------\n";
        v.push_back(i);
    }

/*
    int arr[10];
    arr[0] = 5;
    arr[0] = 5;
    arr[4] = 3;
    int* arr2 = arr+4;
    cout<<"\n";
    cout<<arr2<<" "<<(*arr2);
    cout<<"\n";
    vector<int>::iterator it = v.begin();
    cout<<"Iterador inicial: "<< (*it) <<"\n";
*/

    // Iterador tipo random
    vector<int>::iterator it = v.begin();
    //it+=5;
    //v.erase(it);

    sort(v.begin(), v.end() );

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    vector<vector<int> > matrix;

    for (int i = 0; i < 10; i++)
    {
        vector<int> array;
        for (int j = 0; j < i; j++)
        {
            array.push_back(j);
        }
        
        matrix.push_back(array);
    }
    
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
