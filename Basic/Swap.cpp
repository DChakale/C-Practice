//  WAP to Swap values
#include<iostream>
using namespace std;
int main(){
    int num1,num2,swap;
    cout<<"Enter a first number ";
    cin>>num1;
    cout<<"Enter a secound number ";
    cin>>num2;
    swap=num1;
    num1=num2;
    num2=swap;
    cout<<"Swaped value of first number   = "<<num1;
    cout<<"\nSwaped value of secound number = "<<num2;
}