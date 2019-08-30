#include<iostream>
using namespace std;

class Bank{
    char name[10];
    public:
        void input(){
            cout<<"Enter the bank name"<<endl;
            cin>>name;
        }
        void display(){
            cout<<"Bank name is "<<name<<endl;
        }
};

class HDFC:public Bank{
    public:
        void roi(){
            cout<<"The rate of interest of HDFC is 5%"<<endl;
        }
};

int main(){
    HDFC hdfc;
    hdfc.input();
    hdfc.display();
    // hdfc.print();
    hdfc.roi();
    return 0;
}