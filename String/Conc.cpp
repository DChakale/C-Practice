/*
strcat():
This is string concatnate built in function.
This function required two argument.
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char d[]="Doctor";
    char c[]="Doom";
    strcat(d,c);
    cout<<d;
}