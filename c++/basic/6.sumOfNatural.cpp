#include<iostream>
using namespace std;

int main(){
    int n,sum=0 ;
    cout<<"enter the last natural number :";
    cin>>n;

   // int sum = (n * (n+1))/2;    using formula
   // cout<<sum<<endl;

   for(int i = 1; i<=n ; i++){
      sum = sum + i;
   }

   cout<<sum<<endl;
}