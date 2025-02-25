#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"enter value of number: "<<endl;
    cin>>number;
    int flag=0;
    for(int i=2;i<=number;i++){
        if(number%i==0){ 
            flag++;
        }
    }

    if(flag>1){
        cout<<"non prime"<<endl;
    }else{
        cout<<"prime"<<endl;
    }
}