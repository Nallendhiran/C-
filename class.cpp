#include<iostream>
#include<string>
using namespace std;

class first{
private:
    string name;
public:
    first(){
        cout<<"first constructor is called"<<endl;
    }
    void setName(string val){
        name=val;
    }
    string getName(){
        return name;
    }
};
int main(){
    first fn;
    string nam;
    cout<<"Enter the name "<<endl;
    cin>>nam;
    fn.setName(nam);
    cout<<"the name is "<<fn.getName()<<endl;
    return 0;
}
