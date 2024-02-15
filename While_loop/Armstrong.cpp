//To check entered number is armstrong or not 

#include <iostream>
using namespace std;
int main(){
    int num,temp=0,dn,d;
    cout<<"Enter a number ";
    cin>>num;
    dn=num;
    while (dn!=0)
    {
        d=dn%10;
        temp=temp+(d*d*d);
        dn/10;
    }
    if(temp==num){
        cout<<"Entered number "<<num<<" = "<<"Armstong";
    }
    else{
        cout<<"Entered Number "<<num<<" = "<<"Not Armstrong";
    }
    
}
