#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3,great;
    cout<<"enter the value of num1 num2 num3"<<endl;
    cin>> num1 >> num2 >> num3;

    great = num1;

    if(num2 > great){
        great = num2;
    }
    if(num3 > great){
        great = num3;
    }
    
    cout<<"the gratest number is : "<<great<<endl;

}