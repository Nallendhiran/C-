#include "operator_overloading.h"
#include<iostream>
using namespace std;
overloading::overloading()
{

}
overloading::overloading(int i){
}
overloading overloading::operator+(overloading ol){
    overloading over;
    over.num=num+ol.num;
    return over;
}
