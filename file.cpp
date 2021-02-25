#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream ffile;
    ffile.open("text.txt");
    //to check the file is open or not
    if(ffile.is_open()){
        cout<<"file is opened"<<endl;
    }
    else{
        cout<<"file is not having opened"<<endl;
    }
    ffile<<"in this file nothing is showed or displayed";
    ffile.close();
    return 0;
}
