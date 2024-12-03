#include <iostream>
using namespace std;

class Tea{
    public:
       virtual void prepareIngredients() = 0;
       virtual void brew() = 0;
       virtual void serve() = 0;
       void makeTea(){
           prepareIngredients();
           brew();
           serve();
       }
};           
                //derived class
class GreenTea : public Tea {
    public:
    void prepareIngredients() override{
        cout<<"green leaves  and water is ready"<<endl;
    }
    void brew() override{
        cout<<"green tea brew"<<endl;
    }
    void serve() override{
        cout<<"green tea served"<<endl;
    }
};
class MasalaTea : public Tea {
    public:
    void prepareIngredients() override{
        cout<<"masala Tea  and water is ready"<<endl;
    }
    void brew() override{
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
    m.makeTea();
    return 0;
}
