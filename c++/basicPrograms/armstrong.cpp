#include<iostream>
using namespace std;
int main(){
    int number = 372;           //371
    int og = number;
    int lastNum =0;
    int sum =0;

    while(number>0){
        lastNum = number %10;
        sum = sum + (lastNum*lastNum*lastNum);
        number = number/10;
    }
    cout<<"sum:"<<sum<<endl;

    if(og==sum){
        cout<<"armSTRONG"<<endl;
    }else{
        cout<<"not an armstrong"<<endl;
    }
}