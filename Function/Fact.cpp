// Enter a numbers and check entered numbers factorial

#include<iostream>
using namespace std;
int main(){
    int num,fact=1;
    void enter();{
        cout<<"Enter a number : ";
        cin>>num;
    }
    void facto();{
        for (int i=1;i<=num;i++){
            fact=fact*i;
        }
    }
    void display();{
        cout<<"Entered :"<<num<<" = "<<fact;
    }
}