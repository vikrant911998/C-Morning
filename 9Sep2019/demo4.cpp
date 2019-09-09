#include<iostream>
// #include<string.h>
// #include<cstring>
using namespace std;

int main(){
    string name ="brain";
    string name1 ="brain";
    cout<<name.compare(name1)<<endl;
    if(name.compare(name1) == 0)
        cout<<"Same String"<<endl;
    cout<<name[4]<<endl;
    cout<<name.at(4)<<endl;
    cout<<name<<endl;
    cout<<"The length is "<<name.size()<<endl;
    cout<<"The length is "<<name.length()<<endl;
    cout<<name.empty()<<endl;

    name.resize(name.size()+5,'$');
    cout<<name<<endl;
    
    // name.clear();
    // cout<<name<<endl;
    // int length = strlen(name);
    // cout<<"The length is "<<length<<endl;
    // cout<<"The length is "<<strlen(name)<<endl;



    return 0;
}