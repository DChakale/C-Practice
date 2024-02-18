// Enter a three number and display it (use array)
#include<iostream>
using namespace std;
int main(){
    int num[3];
    cout<<"Enter a Three numbers ";
    for(int i=0;i<=2;i++){
        cin>>num[i];
    }
    for(int j=0;j<=2;j++){
        cout<<"Entered number : "<<num[j]<<"\n";
    }
}