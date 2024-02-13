// Display addition of first  10 odd numbers
// First odd numbers are 1,3,5,7,9,11,13,15,17,19
#include<iostream>
using namespace std;
int main(){
    int add=0;
    for (int i=1;i<=20;i++){
        add=add+i;
        i++;
    }
    cout<<"Addition of first 10 odd = "<<add;
}