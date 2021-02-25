#include<iostream>
using namespace std;
int recursive(int i){
    if(i!=1){
        return i*recursive(i-1);
    }
    return 1;
}
int main(){
    cout<<recursive(5);
return 0;
}
