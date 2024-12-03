#include<iostream>
using namespace std;

class animal{
    public:
    int age;
    int weight;
    public:
    void bark(){
        cout<<"bark"<<endl;
    }
};

class human{   // single inheritance
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class hybrid : public animal, public human {

};

int main(){
    hybrid h1;
    h1.bark();
    h1.speak();

}