#include<iostream>
using namespace std;

class define{
public:
    void one(){
        cout<<"you called one method"<<endl;
    };
};
int main(){

// : initialize var in this
define::one();


return 0;
}
//onlu constructor and :(symbol) take member initializer
