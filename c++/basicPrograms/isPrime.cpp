#include <iostream>
using namespace std;

bool isPrime(int n){
        if(n<=1) return false;
        for(int i=2;i<n;i++){
            if(n%i==0) return false ;
        else{
            return true ;
        }
        }
}

int main(){
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    if(isPrime(num)){
        cout<< num<< "is a PRIME"<<endl;
    }
    else{
        cout<<num<<"Not PRIME"<<endl;
    }
}