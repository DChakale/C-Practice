/*
strcpy() :
This is string copy function.
This function is used to copy a string into another string.
this function required a two argument.
In string copy function, Secound argument copy in first argument.
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char d[]="Doctor";
    char c[10];
    strcpy(c,d);
    cout<<c<<"\n";
    cout<<d;
}