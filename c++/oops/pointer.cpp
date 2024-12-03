#include<iostream>
using namespace std;

int main(){

    int a=3;
    cout<<"value stored in a:"<<a<<endl;           // & --> address of operator
    cout<<"memory address of a is:"<<&a<<endl;     // { & } operator returns memory address of variable  

                    //pointer holds memory address of other variable
     int* aptr;     // pointer declaration
     aptr = &a;     // pointer intialization
     cout<<"the pointer variable stores the address of a:"<<aptr<<endl;

                                    // * --> dereference operator 
                                    // ruturns value store on memory address
     cout<<"the value stored on memory address 0x61ff08 :"<<*aptr;


     cout<<"practice section\n";
     int  num = 500;
     int* numPtr = &num;
     cout<<"address of num "<<numPtr<<endl;
     cout<<"value of num :"<<*numPtr<<endl;

    // pointer to pointer 
    int** c = &aptr ;
    cout<<"memory address of pointer variable aptr :"<<c<<endl;
    cout<<"value at &aptr :"<<*c<<endl;



















}