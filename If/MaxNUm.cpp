//WAp enter three number weather cheak which is larger 
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3,max;
    cout<<"Enter first number ";
    cin>>num1;
    cout<<"Enter secound number ";
    cin>>num2;
    cout<<"Enter third number ";
    cin>>num3;
    max=num1;
    if(max<num2)
        max=num2;
    if(max<num3)
        max=num3;
    cout<<"laeger number = "<<max;
}