// Display fctoral of any number
#include<iostream>
using namespace std;
int main(){
    long long int  num,mul=1;
    cout<<"Enter a number ";
    cin>>num;
    for(int i=1;i<=num;i++){
        mul=mul*i;    
    }
    cout<<"Factoral of "<<num<<" = "<<mul;
}