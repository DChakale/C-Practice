//Wap to check enter number is odd or even
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number";
    cin>>num;
    if(num%2==0)
    {
        cout<<"Entered number "<<num<<" Is Even number";
    }
    else
    {
        cout<<"Entered number "<<num<<" Is Odd number";
    }
}