#include<iostream>
using namespace std;

class cons{
public:
    cons(){
        cout<<"cons is called"<<endl;
    };
    ~cons(){
        cout<<"deconstructor is called"<<endl;
    }
};
int main(){
    cons c;
    return 0;
}
