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

class dog : public Animal{ 

};

class germanShepard : public dog{

};

int main(){
    germanShepard pogya;
    pogya.speak();

}