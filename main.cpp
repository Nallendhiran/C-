#include<iostream>
#include "member_initialize.h"
#include "composition.h"
#include "operator_overloading.h"
using namespace std;


int main(){
////member_initialize
//    member_initialize mi(1,2);
//    mi.print();

////composition
//    composite c;
//    composition con;
//    con.avalue(1);
//    c.somecomposite(con,3);

//operator overloading
    overloading a(12);
    overloading b(10);
    overloading c;
    c=a+b;
    cout<<c.num<<endl;



return 0;
}
