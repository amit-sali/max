#include <iostream>
using namespace std; 

int main(){

    for(int i=0;i<6;i++){
        
        if(i%2==0){
            for(int j=0;j<8;j++){
                if(j%2==0){
                    cout<<"1";
                }else{
                    cout<<"2";
                }
                
            }
            cout<<endl;
        }
        else{
             for(int j=0;j<8;j++){
                if(j%2==0){
                    cout<<"2";
                }else{
                    cout<<"1";
                }
                
            }
            cout<<endl;


        }
    }
}