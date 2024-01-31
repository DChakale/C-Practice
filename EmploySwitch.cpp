//WAP to enter a employee id to display employee detail (use switch case)
#include<iostream>
using namespace std;
int main(){
    int id;
    cout<<"Enter a employee ID";
    cin>>id;
    switch(id){
        case 616:
                 cout<<"Employee Name : Joe Goldberag \nEmail : \nAddress : \nMobile No. : ";
                 break;
        case 818:
                 cout<<"Employee Name : Guaniver Beck \nEmail : \nAddress : \nMobile No. : ";
                 break;
        case 1:
                 cout<<"Employee Name : Tony Stark \nEmail : \nAddress : \nMobile No. : ";
                 break;
        case 76:
                 cout<<"Employee Name : Martha Cleark \nEmail : \nAddress : \nMobile No. : ";
                 break;
        case 69:
                 cout<<"Employee Name : Sunil Bhosle \nEmail : \nAddress : \nMobile No. : ";
                 break;
        case 96:
                 cout<<"Employee Name : MISTY \nEmail : \nAddress : \nMobile No. : ";
                 break;
        case 16:
                 cout<<"Employee Name : hasToBeSame \nEmail : \nAddress : \nMobile No. : ";
                 break;
        case 61:
                 cout<<"Employee Name : KuchOver Ride \nEmail : \nAddress : \nMobile No. : ";
                 break;
        case 85:
                 cout<<"Employee Name : JTHerMus tbeHis \nEmail : \nAddress : \nMobile No. : ";
                 break;
        case 26:
                 cout<<"Employee Name : Sare Ala  \nEmail : \nAddress : \nMobile No. : ";
                 break;

        default:
                 cout<<"Enter valid employee id";
    }
}