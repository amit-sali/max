#include<iostream>
// #include"hero.cpp"   suing this method we can also import class from outside
using namespace std ;

// class - user defined data-type 
class hero {
    // public , private , protected : access specifiers , by default its private.
    private :
    int health;

    public:
    string level;
   
    //getter setter are methods which gives us access to private class members
    //from outside of the class, condition is method should be public  
    int getHealth(){
        return health;
    }
    int setHealth(int h){
        health = h;
    }
    
};

int main(){
    hero amit;  // object
    amit.setHealth(10);
    amit.level = "diamond";

   cout<<"the power of amit is :"<<amit.getHealth()<<endl;
   cout<<"the level of amit is :"<<amit.level <<endl;
}