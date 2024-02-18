/*
strrev() :
- This is a string reverse built-in-function.
- This function retrun a reverse string.
- This function require one argument.
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char m[]="TeneT";
    char a[10];
    a = strrev(m);
    cout<<a;
}