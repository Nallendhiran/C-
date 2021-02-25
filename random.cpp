#include<iostream>
#include <cstdlib>
using namespace std;

int main(){
    int i=1;
    srand(100);
    while(i<=10){
        cout<<rand()<<endl;
        i++;
    }
    return 0;
}
