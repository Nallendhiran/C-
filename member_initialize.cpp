#include "member_initialize.h"
#include<iostream>
using namespace std;

member_initialize::member_initialize(int a,int b)
:vala(a),valb(b)
{

}
void member_initialize::print(){
    cout<<"a "<<vala<<"b "<<valb<<endl;
}
