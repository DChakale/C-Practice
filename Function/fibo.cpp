// fibonanci serise of 15 term (use function ) and display it 
// 0,1,1,2,3,5,8,13,21,33,.....

#include<iostream>
using namespace std;
int main(){
    int num1=0,num2=1,dm;
    cout<<"Fibonanci series : "<<num1<<"\t"<<num2<<"\t";
    void logic();{
        for (int i=1;i<=13;i++){
            dm=num1+num2;
            cout<<dm<<"\t";
            num1=num2;
            num2=dm;
        }
    }
}