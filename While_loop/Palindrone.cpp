// Enter a number weather check entred number is palindrome or not

#include<iostream>
using namespace std;
int main(){
    int num,dn,temp=0,d;
    cout<<"Enter a number : ";
    cin>>num;
    dn=num;
    while(dn!=0){
        d=dn%10;
        temp=(temp*10)+d;
        dn/10;
    }
    if(temp==0)
    cout<<"Palindrome";
    else 
    cout<<"Not Palindrome";
}