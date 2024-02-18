// Enter a string and display it
/*
#include<iostream>
using namespace std;
int main(){
    char d[]="Dharashiv";
    cout<<d;
}
*/
/*#include<iostream>
using namespace std;
int main(){
    char st[10]="Dharashiv";
    for (int i=0;i<=9;i++){
        cout<<st[i];
    }
}
*/
#include<iostream>
using namespace std;
int main(){
    char st[10];
    cout<<"Enter a string : ";
    for(int i=0;i<=9;i++){
        cin>>st[i];
    }
    /*for (int j=0;j<=9;j++){
        cout<<st[j];
    }*/
    cout<<"Entered String : "<<st;
}