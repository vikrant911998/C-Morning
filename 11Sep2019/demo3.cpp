#include<iostream>
#include<string.h>
using namespace std;

class User{
    char username[10],password[10];

    public:
        void input(){
            cout<<"Enter the username -(not more than 10 characters)"<<endl;
            cin>>username;
            cout<<"Enter the password -(not more than 10 characters)"<<endl;
            cin>>password;
        }

        void check(){
            if(strcmp(username,password) == 0){
                cout<<"Welcome User"<<endl;
            }
            else{
                cout<<"Invalid Userid Or Password"<<endl;
            }
        }

};


int main(){
    User obj;
    obj.input();
    obj.check();
}