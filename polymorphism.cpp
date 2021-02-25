#include<iostream>
using namespace std;

class polymorphism{
public:
    void method();
};
class poly:public polymorphism{
public:
    void method(){
        cout<<"method is called by poly"<<endl;
    }
private:
    int call;
};
class morph:public polymorphism{
public:
    void method(){
        cout<<"method is called by morph"<<endl;
    }
};
//int main(){
//    poly p;
//    morph m;
//    polymorphism *po1=&p;
//
//    polymorphism *po2=&m;
//
//    po1->method();
//    po2.method();
//}
