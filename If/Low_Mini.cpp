//Enter a three number and weather check which is lowest/minimum number (Use If Statment)

#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3,mini;
    cout<<"Enter a first number ";
    cin>>num1;
    cout<<"Enter a secound number ";
    cin>>num2;
    cout<<"Enter a third number ";
    cin>>num3;
    mini=num1;
    if(num2<mini){
        mini=num2;
    }
    if(num3<mini){
        mini=num3;
    }
    cout<<"Minimum/Lowest number = "<<mini;
}