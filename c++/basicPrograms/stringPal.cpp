#include<iostream>
using namespace std;

int main(){
    string str = "ama";
    string og = str;
    string rev ;
    for(int i = str.length()-1;i>=0;--i){
        cout<<str[i];
        rev.push_back(str[i]);
    }
    cout<<"\nrev value is:"<<rev<<endl;
    cout<<"original value:"<<og<<endl;

    if(og == rev){
        cout<<"string is palindrome"<<endl;
    }else{
        cout<<"string is non-palindrome"<<endl;
    }
}