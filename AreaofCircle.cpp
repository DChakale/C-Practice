// WAP to calculate are of circle and circumfarance
#include<iostream>
using namespace std;
int main(){
    int r;
    float aoc,cir;
    cout<<"Enter a redius";
    cin>>r;
    aoc=3.14*r*r;
    cir=2*3.14*r;
    cout<<"Area of circle          = "<<aoc;
    cout<<"\nCircle of circumferance ="<<cir;
}