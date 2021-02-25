#include<iostream>
using namespace std;

class pure{
public:
//    virtual void method(){};//it is a template //it does not compulsory to inherit
    //pure virtual
    virtual void method()=0;//it compulsory requires to inherit the methoid
};
class impure:public pure{
public:
    void method(){
    cout<<"method is called by impure"<<endl;
    }
private:
    int call;
};
class unpure:public pure{
public:
    void method(){
    cout<<"method is called by unpure"<<endl;
    }
};
