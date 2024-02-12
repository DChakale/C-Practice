//Enter a radius to calculate area of circle or circle of cercumfarance depending on your choice (Use swich case)

#include<iostream>
using namespace std;
int main(){
    float r,aoc,cur;
    int choice;
    cout<<"Enter a Radius ";
    cin>>r;
    cout<<"Emter 1 for Area of circle \nEnter 2 for Circle of cercumfarance ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        aoc=r*r*3.14;
        cout<<"Area of circle of "<<r<<" = "<<aoc;
        break;
    case 2:
        cur=2*3.14*r;
        cout<<"Circle of cercumfarance of "<<r<<" = "<<cur;
        break;
    
    default:
        cout<<"Enter a valid number";
        break;
    }
}