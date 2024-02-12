//WAp to display name of the week of day of week entering the choice

#include<iostream>
using namespace std;
int main(){
    int choice ;
    cout<<"Enter 1 to 7 Any number to display name of the day of week";
    cin>>choice;
    switch(choice){
        case 1:
               cout<<"Sunday";
               break;
        case 2:
               cout<<"Monday";
               break;
        case 3:
               cout<<"Tuesday";
               break;
        case 4:
               cout<<"Wensday";
               break;
        case 5:
               cout<<"Thursday";
               break;
        case 6:
               cout<<"Friday";
               break;
        case 7:
               cout<<"SAturday";
               break;
        default:
               cout<<"Enter a valid number";
    }
}