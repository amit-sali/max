#include<iostream>
using namespace std;

int main(){
    string str = "amit";
    string rev ;
    for(int i = str.length();i>=0;i--){
        cout<<str[i];
        rev.push_back(str[i]);
    }
    cout<<"\nrev value is:"<<rev<<endl;
}