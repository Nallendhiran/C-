#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"Enter the value for a: "<<endl;
    cin>>a;
    cout<<"Enter the value for b: "<<endl;
    cin>>b;
    try{
        if(a||b ==0){
            throw "error";
        }
        else{
            cout<<a/b<<endl;
        }
    }
    catch(string x){
        cout<<x<<endl;
    }
return 0;
}
