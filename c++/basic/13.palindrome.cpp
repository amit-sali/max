#include<iostream>
using namespace std;

int main(){
    int number,rev=0;
    cout<<"enter the value of number: "<<endl;
    cin>>number;
    int numberCopy = number;

    while(number > 0){
        int lastDigit = number % 10;
        rev = rev * 10 + lastDigit;
        number = number/10;

    }

    cout<<"the reverse value is :"<<rev<<endl;

    if(numberCopy == rev){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"not palindrome"<<endl;
    }

}