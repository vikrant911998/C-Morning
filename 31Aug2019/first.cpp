#include<iostream>
using namespace std;

class A{
    float f;
    public:
        A(){
            float f =4.7;
            this->f = 5.4;
            cout<<"Default constructor of Class A"<<endl;
            cout<<"The value of private member is "<<this->f<<" and "<<f<<endl;
        }
        A(int a){
            cout<<"The parameterised constructor of Class A"<<endl;
        }
};
class B:public A{
    public:
        B():A(){
            
            cout<<"Default constructor of Class B"<<endl;
        }
};

class C:public B{
    public:
        C():B(){
            cout<<"Default constructor of Class C"<<endl;
        }

};

int main(){
    C obj;

    return 0 ;
}