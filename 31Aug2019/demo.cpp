#include<iostream>
using namespace std;


int main(){
    char name[10] = {'v','i','k','r','a','n','t','s','i','n'} ;
    // cout<<"Enter your name"<<endl;
    // cin>>name;
    // cout<<"The name is "<<name<<endl;
    int j = 9;
    for(int i=0;i<j;i++){
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;
        j--;
    }
    cout<<"The reverse is "<<name<<endl;

    return 0;
}

