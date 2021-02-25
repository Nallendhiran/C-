#include<iostream>
using namespace std;

void name(){
    cout<<"you called without parameter or arguments  method"<<endl;
}
void name(int i){
    cout<<"you entered with parameter or arguments method"<<endl;
}
int main(){
    name();
    name(1);
return 0;
}
