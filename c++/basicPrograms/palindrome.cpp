#include<iostream>
using namespace std;

int main(){
    int num = 12321;
    int original = num;
    int reverse = 0;
    cout<<"original:"<<num<<endl;
    while (num>0)
    {   
        reverse = reverse *10+num%10;
        num= num/10;
        /* code */
    }
    
    cout<<"reversed:"<<reverse<<endl;

    if(original == reverse){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"non-palindrome"<<endl;
    }
}

 