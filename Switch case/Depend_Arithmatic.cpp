// Enter two number to calculate arithmatic opration depending on your choice (Use Switch case)

#include<iostream>
using namespace std;
int main(){
    int num1,num2,add,mul,sub,div,md,choice;
    cout<<"Enter a first number ";
    cin>>num1;
    cout<<"Enter a secound number ";
    cin>>num2;
    cout<<"Enter 1 for Addition \nEnter 2 for Subtraction \nEnter 3 for Multiplcation \nEnter 4 for Module Division \nEnter 5 for Division ";
    cin>>choice;
    switch (choice)
    {
    case /* constant-expression */1:
        add=num1+num2;
        cout<<"Addition of "<<num1<<" + "<<num2<<" = "<<add;
        break;
    case 2:
        sub=num1-num2;
        cout<<"Subtraction of "<<num1<<" - "<<num2<<" = "<<sub;
        break;
    case 3:
        mul=num1*num2;
        cout<<"Multiplication of "<<num1<<" * "<<num2<<" = "<<mul;
        break;
    case 4:
        md=num1%num2;
        cout<<"Module division of "<<num1<<" % "<<num2<<" = "<<md;
        break;
    case 5:
        div=num1/num2;
        cout<<"Division of "<<num1<<" / "<<num2<<" = "<<div;
        break;
    default:
        cout<<"Enter a valid number";
        break;
    }
}