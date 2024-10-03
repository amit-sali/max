// sum of fitst N numbers using recursion

#include<iostream>
using namespace std;

void print(int i, int sum){
    if(i<0){
        cout<<"the sum is :"<<sum<<endl;
        return;
    }
    print(i-1,sum+i);
}

int main(){
    print(5,0);
}