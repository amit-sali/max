#include<iostream>
using namespace std;

void generateFib(int num){
    int a =0, b=1,next;
    for(int i=0;i<=num;i++){
        cout<<a<<" ";
        next = a+b;
        a = b;
        b = next;
    }
    cout<<endl;

}

int main(){
    int n;
    cout<<"how many fibbonacci terms you want :"<<endl;
    cin>>n;

    if(n <=0)
        cout<<"enter positive number:"<<endl;
    else
        generateFib(n);
    
}