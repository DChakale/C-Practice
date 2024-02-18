// Enter a five numbers in array and display it in reverse order
/*
#include <iostream>
using namespace std;
int main(){
    int num[]={1,2,3,4,4,5};
    for (int i=5;i>=0;i--)
    {
        cout<<"Entered numbers : "<<num[i]<<"\n";
    }
}
*/
#include <iostream>
using namespace std;
int main(){
    int num[5];
    cout<<"Enter a numbers : ";
    for(int i=0;i<=4;i++){
        cin>>num[i];
    }
    for (int j=4;j>=0;j--)
    {
        cout<<"Entered Numbers : "<<num[j]<<"\n";
    }

}