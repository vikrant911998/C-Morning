#include<iostream>
using namespace std;

class A{
    public:
        void print(){
            cout<<"The print of class A"<<endl;
        }
};

class B{
    public:
        void print1(){
            cout<<"The print of class B"<<endl;
        }
};

class C:public A,public B{
    public:
        void print2(){
            cout<<"The print of class C"<<endl;
        }
};  


int main(){
    C obj;
    obj.print();
    obj.print1();
    obj.print2();
    return 0;
}