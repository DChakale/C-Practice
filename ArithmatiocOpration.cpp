//Arithmatic opration
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,add,multi,sub,div,mod;
    cout<<"Enter a first number";
    cin>>num1;
    cout<<"enter a secound number";
    cin>>num2;
    add=num1+num2;
    multi=num1*num2;
    sub=num1-num2;
    div=num1/num2;
    mod=num1%num2;
    cout<<"Addition         of "<<num1<<" + "<<num2<<" = "<<add;
    cout<<"\nMultipication    of "<<num1<<" * "<<num2<<" = "<<multi;
    cout<<"\nSubtraction      of "<<num1<<" - "<<num2<<" = "<<sub;
    cout<<"\nDivision         of "<<num1<<" / "<<num2<<" = "<<div;
    cout<<"\nModule Division  of "<<num1<<" % "<<num2<<" = "<<mod;

}