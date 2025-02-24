#include<iostream>
using namespace std;

int main(){
    int year ;
    cout<<"enter the year: ";
    cin>>year;

    if(year%4==0){
        cout<<year<<" its leap year"<<endl;
    }
    else{
        cout<<year<<" not a leap year"<<endl;
    }
}