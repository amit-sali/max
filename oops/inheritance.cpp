#include<iostream>
using namespace std;

class human{
    public:
    int age;
    int height;
    int weight;

    public:
    int getAge(){
        return this-> age;
    }
    int setWeight(int w){
        this->weight = w;
    }
};

class male : public human{
    public:
    string color;

    void sleep(){
        cout<<"male is sleeping"<<endl;
    }

};

int main(){
    
    male amit;

  cout<<amit.getAge()<<endl;
   amit.setWeight(70);
   cout<<amit.weight<<endl;
   amit.sleep();
    
}