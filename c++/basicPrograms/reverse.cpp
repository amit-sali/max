#include<iostream>
using namespace std;

int main(){
    int num = 12345;
    int reverse = 0;
    cout<<"original:"<<num<<endl;
    while (num>0)
    {   
        reverse = reverse *10+num%10;
        num= num/10;
        /* code */
    }
    
    cout<<"reversed:"<<reverse<<endl;
}

 