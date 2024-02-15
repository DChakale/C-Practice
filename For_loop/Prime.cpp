// Check entered number is prime or not

#include<iostream>
using namespace std;
int main(){
    int num,pr1m=0;
    cout<<"Enter a number ";
    cin>>num;
    for (int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            pr1m=1;
        }
    }
    if(pr1m==0)
    cout<<"Entered Number "<<num<<" = Prime Number";
    else
    cout<<"Entered Number "<<num<<" = Not Prime";


}