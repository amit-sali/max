#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking";
    }
};

class dog : public Animal{   // single inheritance

};

int main(){
    dog pogya;
    pogya.speak();

}