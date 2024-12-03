#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n; 
    cin>>n;
   // cout<<"size of n:"<<n<<endl;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
           
            if(arr[j]<arr[min]){
                min = arr[j];
            }  
        }
        swap(arr[i], arr[min]);
    }

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
