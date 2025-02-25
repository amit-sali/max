#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int small=arr[0] ;

    for (int i = 1; i < sizeof(arr)-1; i++)
    {   
        if(arr[i]<small){
            small= arr[i];
        }
    }

    cout<<"smallest element :"<<small<<endl;
}