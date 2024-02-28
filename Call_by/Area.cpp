/* Call by value :- In call by value particular function is called when by matching a 
argument list (Particualr list).
Function argument must match there numbers and types.
In call by value particular function is called then actual argument will copy in formal argument 
*/
#include<iostream>
using namespace std;
class demo {
    int aoc,cir;
    public :void enter(int r){
        aoc=3.14*r*r;
        cir=2*3.14*r;
    }
    void show(){
        cout<<"Area of circle = "<<aoc;
        cout<<"\nCircle of circumfarnce = "<<cir;
    }
};
int main(){
    demo d;
    d.enter(5);
    d.show();
    return 0;
}