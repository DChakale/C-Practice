// Enter a number to check how many digit present into a number

#include<iostream>
using namespace std;
int main(){
    int num,dm=0,temp;
    cout<<"Enter a Number : ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        dm++;
    }
    cout<<"Digit Present into Entered number "<<num<<" = "<<dm;

}