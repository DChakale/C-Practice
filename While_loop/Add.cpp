// Display addtion of first 10 naturl numbers (use while loop)

#include<iostream>
using namespace std;
int main(){
    int i=1,add=0;
    while (i<=10)
    {
        add=add+i;
        i++;
    }
    cout<<"Addtion of first 10 Numbers = "<<add;
}