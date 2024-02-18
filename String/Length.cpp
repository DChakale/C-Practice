/*
strlen() : This is String length function
This function is used to calculate the length of string
This function required one argument
*/
#include <iostream>
#include<string.h>
using namespace std;
int main(){
    char st[]= "Strange";
    int l;
    l=strlen(st);
    cout<<"Length of string = "<<l;
}