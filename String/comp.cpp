/*
strcmp() :
- This is built in string copare function.
- This function required two argument.
- If both string are same, then it return result is zero. Otherwise it return the ASCII value of the 
  numaric difference betwen them. 
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char p[]="Peter";
    char q[]="Parker";
    int m;
    m=strcmp(p,q);
    cout<<m;
}