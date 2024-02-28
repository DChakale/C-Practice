/*How to write function defination outside of class:-
When user want to write a defination outside of the class function must declared into respective class.
Then while writing a defination programer must follow the syntax :-

retruntype       class name :: Function(){
    block of statments;
}
*/
#include<iostream>
using namespace std;
class demo{
    int num1,num2,temp;
    public : void enter();
             void logic();
             void display();
};
void demo ::enter(){
    cout<<"Enter a first num1 :";
    cin>>num1;
    cout<<"Enter a secound num2 :";
    cin>>num2;
    cout<<"Before Swap num1 :"<<num1;
    cout<<"\nBefore swap num2 :"<<num2;
}
void demo::logic(){
    temp=num1;
    num1=num2;
    num2=temp;
}
void demo ::display(){
    cout<<"\nAfter swap num1 :"<<num1;
    cout<<"\nAfter swap num2 :"<<num2;
}
int main(){
    demo d;
    d.enter();
    d.logic();
    d.display();
    return 0;

}