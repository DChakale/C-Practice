// Factorial of 5

#include<iostream>
using namespace std;
int main(){
    int mul=1;
    for(int i=1;i<=5;i++){
        mul=mul*i;
    }
    cout<<"Factorial of 5 = "<<mul;
}