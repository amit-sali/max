#include<iostream>
// #include"hero.cpp"   suing this method we can also import class from outside
using namespace std ;

// class - user defined data-type 
class hero {
    // public , private , protected : access specifiers , by default its private.
     public:
    int health;
    string level;

    hero(){ // non parametric constructor runs by default 
        cout<<"DEFAULT : non parameterized constructor called\n";
    }

    hero(int health, string level){    // parametrized constructor is called if parameter is passed 
        cout<<" paramerized constructor is called \n";
        this->health = health ;       //this operator used to point object within the class
        this->level = level ;
    }
   
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

    hero suresh(99,"super punch") ;
   
    hero hulk(suresh);  //copy constructor 
     cout<<"the power in int of hulk: "<<hulk.health<<endl;
    cout<<"the power in string of hulk: "<<hulk.level<<endl;

    hero superman(hulk);
    cout<<"superman health:"<<superman.health<<endl;
    cout<<"superman level:"<<superman.level<<endl;







//    hero amit(69);  // object
//    // amit.setHealth(10);
//    amit.level = "diamond";
//    cout<<"the power of amit is :"<<amit.getHealth()<<endl;
//    cout<<"the level of amit is :"<<amit.level <<endl;


}