// Enter a number of month to display how many days in that month

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number of month ";
    cin>>num;
    switch (num)
    {
    case 1:
        cout<<"In January there are 31 days";
        break;
    case 2:
        cout<<"In Feb there are 28/29 days";
        break;
    case 3:
        cout<<"In March there are 31 days";
        break;
    case 4:
        cout<<"in April there are 30 days";
        break;
    case 5:
        cout<<"In May there are 31 days";
        break;
    case 6:
        cout<<"In June ther are 30 days";
        break;
    case 7:
        cout<<"In July there are 31 days";
        break;
    case 8:
        cout<<"In August there are 31 days";
        break;
    case 9:
        cout<<"In September there are 30 days";
        break;
    case 10:
        cout<<"In Octomber ther are 31 days";
        break;
    case 11:
        cout<<"In November ther are 30 days";
        break;
    case 12:
        cout<<"In December there are 31 days";
        break;
    default:
        cout<<"Invalid Input";
        break;
    }
}