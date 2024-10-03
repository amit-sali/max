#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i]; 
        arr[i] = temp;
    }
     cout<<endl;
     cout<<"sorted array:"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}

int main(){
    int n;
    cout<<"enter the elements of array:";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"elements of array are : "<<endl;
     for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    selection_sort(arr, n);
}