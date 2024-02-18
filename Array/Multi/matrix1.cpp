// 3*3 Matrix array

#include<iostream>
using namespace std;
int main(){
    int num[3][3];
    cout<<"Enter a nine numbers ";
    for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            cin>>num[i][j];
        }
    }
    /*for (int k=0;k<=2;k++){
        for(int l=0;l<=2;l++){
            cout<<num[k][l]<<"\t";
        }
    }*/
    cout<<"\nEntered Array :\n"<<num[0][0]<<"\t";
    cout<<num[0][1]<<"\t";
    cout<<num[0][2]<<"\t\n";
    cout<<num[1][0]<<"\t";
    cout<<num[1][1]<<"\t";
    cout<<num[1][2]<<"\t\n";
    cout<<num[2][0]<<"\t";
    cout<<num[2][1]<<"\t";
    cout<<num[2][2]<<"\t";
    
}