// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;



int main() {
   
   int n;
   int arr[n];
   
   cout<<"enter the size of array:";
   cin>>n;
   cout<<"insert elements of array :"<<endl;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<"array: ";
    for(int i=0;i<n;i++){
       cout<<arr[i];
   }
  
  
   

    return 0;
}