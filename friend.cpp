#include<iostream>

using namespace std;

class friends{
public:
    friends(){a=0;};
private:
    int a;
friend void funnyfriend(friends f);
};
void funnyfriend(friends fe){
    fe.a=12;
    cout<<fe.a<<endl;
}
int main(){
    friends fri;
    funnyfriend(fri);

return 0;
}
