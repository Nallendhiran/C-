#include<iostream>

using namespace std;

template <class type>
type mining(type a,type b){
    cout<<"size of type is"<<sizeof(type)<<endl;
    return a+b;
}

int main(){
    int k=mining(1,2);
    cout<<k<<endl;
}
