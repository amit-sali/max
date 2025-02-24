#include<iostream>
using namespace std;

int main(){
    int number,rev=0;
    cout<<"enter the value of number: "<<endl;
    cin>>number;

    while(number > 0){
        int lastDigit = number % 10;
        rev = rev * 10 + lastDigit;
        number = number/10;

    }

    cout<<rev;

    //  if ( number == rev){
    //     cout<<"the number"<<number<<"is palindrome"<<endl;
    //  }
    //  else{
    //     cout<<"isnt palindrome"<<endl;
    //  }
}