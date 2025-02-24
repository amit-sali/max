#include<iostream>
using namespace std;

int main(){
    int digit,big=0,small=9;
    cout<<"enter the number : ";
    cin >> digit;

    while(digit>0){
        int lastDigit = digit%10;
        if(lastDigit > big){
            big = lastDigit;
        }
        if(lastDigit < small){
            small = lastDigit;
        }

        digit=digit/10;
        
    }

    cout<<"big digit is :"<<big<<endl;
    cout<<"small digit is :"<<small<<endl;
}