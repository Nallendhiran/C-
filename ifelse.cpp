#include<iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout<<"Enter your value\t"<<endl;
    cin>>a;
    cout<<"Enter the dividing value\t"<<endl;
    cin>>b;
    int c=a%b;
    if(c==0){
        cout<<"the value is even number and the number is "<<a/b<<endl;
    }
    else{
        cout<<"the value is odd number and the number is "<<c<<endl;
    }
return 0;
}
