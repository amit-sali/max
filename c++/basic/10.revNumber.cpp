#include<iostream>
using namespace std;

int main(){
    int digit , rev=0;
    cout<<"enter the digit :"<<endl;
    cin>>digit;

    while(digit>0){
        int lastDigit = digit%10;
        rev = rev *10 + lastDigit;
        digit = digit/10;
    }
    cout<<"reverse is :"<<rev;
}