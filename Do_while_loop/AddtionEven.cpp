// Display addtion of first 10 even number using do while loop 

#include<iostream>
using namespace std;
int main(){
    int num=1,add=0;
    do{
        add=add+num;
        num++;
        num++;
    }
    while(num<=20);
    cout<<"Addtion of first 10 even = "<<add;
}