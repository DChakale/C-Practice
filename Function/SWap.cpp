// Enter a two varible to swap and display new changed value

#include <iostream>
using namespace std;
int main(){
    int num1,num2,sw;
    int enter();{
        cout<<"Enter a First number : ";
        cin>>num1;
        cout<<"Enter a secound number : ";
        cin>>num2;
    }
    int swap();{
        sw=num1;
        num1=num2;
        num2=sw;
    }
    int display();{
        cout <<"Swapping value of"<<num1<<"\t"<<num2;
    }
    return 0;
}