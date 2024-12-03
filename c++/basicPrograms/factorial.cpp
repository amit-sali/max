#include<iostream>
using namespace std;

int main(){
    int n ;
    int fact = 1;
    cout<<"enter value :"<<endl;
    cin>>n;

    for(int i=2;i<=n;i++){
        fact = fact * i;
    }
    cout<<"factorial is :"<<fact<<endl;
}