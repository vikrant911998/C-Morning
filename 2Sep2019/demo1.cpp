#include<iostream>
using namespace std;

class A{

    public:
        A(){
            cout<<"Default constructor of Class A"<<endl;
        }
        A(int a){
            cout<<"Parameterised constructor of Class A"<<endl;            
        }
};

class B:public A{
    public:
        B(){
            cout<<"Default constructor of Class B"<<endl;
        }
        B(int a):A(5){
            cout<<"Param constructor of Class B"<<endl;
        }
};


int main(){
    // A obj,obj1(2);
    B obj(3);
    return 0;
}