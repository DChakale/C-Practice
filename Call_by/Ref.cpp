/*Call by refrence (address):-
 - In call by reference particualr function called when argument/parameter match
 - When particular function called actual address will copied into pointer formal argument 

*/

#include<iostream>
using namespace std;
class demo{
    int add,sub;
    public : void getdata(int*num1,int*num2){
        add=*num1+*num2;
        sub=*num1-*num2;
        cout<<"Addtion ="<<add;
        cout<<"\nSubtraction = "<<sub;
    }
};
int main(){
    int num1,num2;
    cout<<"Enter number into num1 and num2 :";
    cin>>num1>>num2;
    demo d;
    d.getdata(&num1,&num2);
    return 0;    

}