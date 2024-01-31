//WAp in c++ enter a number and calculate square and cube depeending on your choice 
#include<iostream>
using namespace std;
int main(){
    int num1,num2,sq,cu;
    cout<<"Enter a number ";
    cin>>num1;
    cout<<"Press 1 for square \nPress 2 for cube ";
    cin>>num2;
    switch(num2){
        case 1:
                 sq=num1*num1;
                 cout<<"Square = "<<sq;
                 break;
        case 2:
                cu=num1*num1*num1;
                cout<<"Qube = "<<cu;
                break;
        default:
                cout<<"Enter a valid number";
    }
}