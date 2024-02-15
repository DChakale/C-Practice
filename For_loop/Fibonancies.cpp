// Display series of 15 term of fibonancies serise 

#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    num1=0;
    num2=1;
    cout<<"Fibonancies series = "<<num1<<" "<<num2<<" ";
    for(int i=1;i<=13;i++)
    {
        num3=num1+num2;
        cout<<num3<<" ";
        num1=num2;
        num2=num3;
    }
}