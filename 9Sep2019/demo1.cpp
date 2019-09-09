#include<iostream>
using namespace std;

int main(){
    char name[50];
    cout<<"Enter your name"<<endl;
    //single word input
    // cin>>name;

    cin.get(name,sizeof(name));

    //sentence input
    // cin.getline(name,sizeof(name));
    cout<<name<<endl;

    return 0;
}