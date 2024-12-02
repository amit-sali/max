
#include <iostream>
using namespace std;

class tea{
    public:
       virtual void prepareIngredients() = 0;
       virtual void brew() = 0;
       virtual void serve = 0;
       
       void mekeTea(){
           prepareIngredients();
           brew();
           serve();
       }
};
                
                //derived class
class GreenTea : public tea {
    public:
    void prepareIngreiants() overide{
        cout<<"green leaves  and water is ready"<<endl;
    }
    void brew() overide{
        cout<<"green tea brew"<<endl;
    }
    void serve() override{
        cout<<"green tea served"<<endl;
    }
};

class MasalaTea : public tea {
    public:
    void prepareIngreiants() overide{
        cout<<"masala Tea  and water is ready"<<endl;
    }
    void brew() overide{
        cout<<"masala tea brew"<<endl;
    }
    void serve() override{
        cout<<"masal tea served"<<endl;
    }
};

int main() {
    
    GreenTea g ;
    MasalaTea m ;
    
    g.makeTea();
    m.maketea();
    
    
   
   
    return 0;
}
