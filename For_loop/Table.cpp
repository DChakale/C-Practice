// Display any table

#include<iostream>
using namespace std;
int main(){
    int num,mul;
    cout<<"Table of ";
    cin>>num;
    for(int i=1;i<=10;i++){
        mul=num*i;
        cout<<num<<" * "<<i<<" = "<<mul<<"\n";
    }
}