// Enter a three number weather check which is large number (Using If statment)

#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3,max;
    cout<<"Enter a first number";
    cin>>num1;
    cout<<"Enter a secound number";
    cin>>num2;
    cout<<"Enter a third number";
    cin>>num3;
    max=num1;
    if(num2>max){
        max=num2;
    }
    if(num3>max){
        max=num3;
    }
    cout<<"Large Number = "<<max;
}
