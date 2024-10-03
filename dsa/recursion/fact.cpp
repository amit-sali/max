// logic not workimg properly
#include <iostream>
using namespace std;
int fact(int n){
    if(n == 0){
        cout<<"factorial is : "<<n<<endl;
        return 1;
    }
    return n * fact(n-1);
}

int main() {
    fact(6);
    return 0;
}