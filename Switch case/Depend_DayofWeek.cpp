// Display name of day of week Entering the choice (use Switch case )

#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Enter 1 to 7 Any Number To Display Name of Day of Week ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"SUNDAY";
        break;
    case 2:
        cout<<"MONDAY";
        break;
    case 3:
        cout<<"TUESDAY";
        break;
    case 4:
        cout<<"WEDNESDAY";
        break;
    case 5:
        cout<<"THURSDAY";
        break;
    case 6:
        cout<<"FRIDAY";
        break;
    case 7:
        cout<<"SATURDAY";
        break;
    default:
        cout<<"Invalid Input ";
        break;
    }
}