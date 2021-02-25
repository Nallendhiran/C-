#include<iostream>
using namespace std;

class constant{
public:
    void show() const{
        cout<<"const is called"<<endl;
    };
};

int main(){
    const constant obj;
    obj.show();
return 0;
}
