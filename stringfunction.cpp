#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    str("some thing to say that this is string function");
    cout<<str<<endl;

    cout<<"Enter some words you like:"<<endl;
    cin>>str;
    cout<<`str<<endl;
    getline(cin,str);

    str("for make something you must learn something ");
    cout<<str.at(0)<<endl;

    cout<<str.substring(28,15)<<endl;

    string s1("one");
    string s2("two");
    cout<<s1<<s2<<endl;
    cout<<s1.swap(s2)<<endl;
    cout<<s1<<s2<<endl;
    //to find
    cout<<str.find("must")<<endl;
    //to find in reverse order
    cout<<str.rfind("you")<<endl;
    //to replace
    cout<<str.replace(23,4,"have to")<<endl;
    //to insert
    cout<<str.insert(43," .......")<<endl;

return 0;
}
