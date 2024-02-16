/*Enter a number to display first and last digit number And do
  addtion of that first and last digit 
*/

#include<iostream>
using namespace std;
int main(){
    int num,first,last,temp1,dm=0,temp2;
    cout<<"Enter a number : ";
    cin>>num;
    temp1=num;
    temp2=num;
    while(temp1!=0)
    {
        temp1=temp1/10;
        dm++;
    }
    // cout<<"digit = "<<dm<<"\n";
    if(dm==2)
    {
        do {
        last=temp2%10; 
        temp2=temp2/10;
        first=temp2;
    }
    while(temp2>10);
    }
    if(dm==3){
         do {
        last=temp2%10; 
        temp2=temp2/100;
        first=temp2;
    }
    while(temp2>10);
    }
    if(dm==4){
         do {
        last=temp2%10; 
        temp2=temp2/1000;
        first=temp2;
    }
    while(temp2>10);
    }
     if(dm==5){
         do {
        last=temp2%10; 
        temp2=temp2/10000;
        first=temp2;
    }
    while(temp2>10);
    }
     if(dm==6){
         do {
        last=temp2%10; 
        temp2=temp2/100000;
        first=temp2;
    }
    while(temp2>10);
    }
     if(dm==7){
         do {
        last=temp2%10; 
        temp2=temp2/1000000;
        first=temp2;
    }
    while(temp2>10);
    }
     if(dm==8){
         do {
        last=temp2%10; 
        temp2=temp2/10000000;
        first=temp2;
    }
    while(temp2>10);
    }
    if(dm==9){
         do {
        last=temp2%10; 
        temp2=temp2/100000000;
        first=temp2;
    }
    while(temp2>10);
    }
    cout<<"First Digit of Entered number : "<<num<<" = "<<first<<" last Digit = "<<last;
    cout<<"\nAddtion of "<<first<<" and "<<last<<" = "<<first+last;
}