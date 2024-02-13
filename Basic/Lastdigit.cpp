//Enter a number and display the last digit of that number
//If you enter number 13 so so the last digit of that number that is 3

#include <iostream>
using namespace std;
int main(){
    int num,md;
    cout<<"Enter a number";
    cin>>num;
    md=num%10;
    cout <<"Last digit of "<<num<<" = "<<md;
}