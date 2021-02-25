#include<iostream>
using namespace std;

template <class type>
class temp{
    type i,j;
public:
    temp(type a,type b){
            i=a;
            j=b;
    }
    type method();

};
template<class type>
type temp<type>::method(){
    return (i<j?i:j);
}

//template specializations

template<>
class diff<char>{
public:
    diff(char fletter){
        cout<<fletter<<endl;
    }
};


int main(){
    temp<int> t(34,90);
    cout<<t.method()<<endl;
}
