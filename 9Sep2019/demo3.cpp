#include<iostream>
using namespace std;
void display(char []);

int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin.getline(name,sizeof(name));
    display(name);
    return 0;
}

void display(char name[]){
    cout<<"Name is "<<name<<endl;
}