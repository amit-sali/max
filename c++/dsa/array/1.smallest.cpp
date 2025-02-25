#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {11, 2, 3, 4, 5};
    int small=arr[0] ;

    /*
        on most systems sizef(arr) returns data_type_size X number_data_elements 
        
    */
    for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++)
    {   
        if(arr[i]<small){
            small= arr[i];
        }
    }

    cout<<"smallest element :"<<small<<endl;
}