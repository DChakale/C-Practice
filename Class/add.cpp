#include <iostream>
using namespace std;
class demo{
    int num1,num2,add;
    public: void enter(){
        cout<<"Enter a first number :";
        cin>>num1;
        cout<<"Enter a secound number :";
        cin>>num2;
        add=num1+num2;
        cout<<"Addition of "<<num1<<" + "<<num2<<" = "<<add;
    }  
};
int main(){
    demo a;
    a.enter();
    return 0;
}