#include <iostream>

using namespace std;

int main()
{
int NoMagnetics;
cin>>NoMagnetics;
 int counter=1;
 int arr[100000];
for(int i=0;i<NoMagnetics;i++){
cin>>arr[i];

}
for(int i=0;i<NoMagnetics-1;i++){
    if(arr[i]!=arr[i+1])
        counter++;
}
    cout<<counter<<endl;





}