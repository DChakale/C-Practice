// Enter a number and calculate square and qube depending on your choice (Use switch case )

#include<iostream>
using namespace std;
int main(){
    int num,sq,qu,choice;
    cout<<"Enter a number ";
    cin>>num;
    cout<<"Enter 1 for square \nEnter 2 for qube ";
    cin>>choice;
    switch(choice){
        case 1:
        sq=num*num;
        cout<<"Square of "<<num<<" = "<<sq;
        break;
        case 2:
        qu=num*num*num;
        cout<<"Qube of "<<num<<" = "<<qu;
        break;
        default :
        cout<<"Enter a valid number";
        break;
    }
}