//Enter a five numbers to performe addtion and display it (use array)

#include<iostream>
using namespace std;
int main(){
    int num[5],add=0;
    cout<<"Enter a five numbers : ";
    for (int i=0;i<=4;i++){
        cin>>num[i];
    }
    for(int j=0;j<=4;j++){
        add=add+num[j];
    }
    cout<<"Addtion of Entered Array : "<<num[0]<<"+"<<num[1]<<"+"<<num[2]<<"+"<<num[3]<<"+"<<num[4]<<" = "<<add;
}