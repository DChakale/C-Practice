#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter Range to cheak perfect numbers";
    cin>>num;
    cout<<"Perfect number between 1 to "<<num;
    for(int i=1;i<num;i++){
        sum=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum==i){
            cout<<"\nperfect number = "<<sum;
        }
    }
}