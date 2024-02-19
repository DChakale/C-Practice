#include <iostream>
#include<string>
using namespace std;
class demo{
    int choice,num1,num2;
    public :
    void enter(){
        cout<<"Enter a first number :";
        cin>>num1;
        cout<<"Enter a secound number :";
        cin>>num2;
        cout<<"Press 1 for addtion :\nPress 2 For Subtraction :";
        cin>>choice;
        int add,sub;
        switch(choice){
            case 1:
            add=num1+num2;
            cout<<"Addtion of "<<num1<<"+"<<num2<<" = "<<add;
            break;
            case 2:
            sub=num1-num2;
            cout<<"Subtraction Of "<<num1<<"-"<<num2<<" = "<<sub;
            break;
            default:
            cout<<"Invalid Input";
        }
    }
};
int main(){
    demo a,b;
    a.enter();
    return 0;
}