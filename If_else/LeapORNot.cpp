//WAp to cheak year is leap or not 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a year";
    cin>>num;
    if (num%4==0)
    cout<<"Entered year "<<num<<" is leap year";
    else
    cout<<"Entered year "<<num<<" is not leap year";
}