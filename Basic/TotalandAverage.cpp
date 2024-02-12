/*WAP in c++ Enter a marks of subject to calculate total and avarage and display it*/
#include<iostream>
using namespace std;
int main(){
    int math,eng,phy,total;
    float avr;
    cout<<"Enter a marks of math = ";
    cin>>math;
    cout<<"Enter a marks of english = ";
    cin>>eng;
    cout<<"Enter a marks of pyhsics = ";
    cin>>phy;
    total=math+eng+phy;
    avr=total/3;
    cout<<"Total marks of subject = "<<total;
    cout<<"\nAverage of subject     = "<<avr;
}
