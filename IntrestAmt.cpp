//Wap to calculate intrest of ammount and display it
#include<iostream>
using namespace std;
int main(){
    int amt,rate;
    float i;
    cout<<"Enter a ammount = ";
    cin>>amt;
    cout<<"Enter a rate = ";
    cin>>rate;
    i=amt*rate/100;
    cout<<"Intrest of given ammount "<<amt<<" = "<<i;
}