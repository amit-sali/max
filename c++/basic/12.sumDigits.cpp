#include<iostream>
using namespace std;

int main(){
    int digit,sum=0;
    cout<<"enter digit : "<<endl;
    cin>>digit;

    while(digit>0){
        int lastDigit = digit%10;
        sum = sum+lastDigit;
        digit = digit/10;
    }

    cout<<"sum of all digits is : "<<sum<<endl;

}