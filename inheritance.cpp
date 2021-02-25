#include<iostream>

using namespace std;

class movie{
public:
    void show(){
        cout<<"movie is displaying with music"<<endl;
    }
};
class music:public movie{

};
int main(){
    music m;
    m.show();
return 0;
}
