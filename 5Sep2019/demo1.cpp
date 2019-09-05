#include<iostream>
using namespace std;

class A{
    int a;
    public:
        virtual void play(){
            cout<<"The play of Class A"<<endl;
        }
};

class B: public A{
    public:
        void play(){
            cout<<"The play of Class B"<<endl;
        }
};

int main(){
    A obj;
    B obj1;
    A *p;
    // obj.play();
    // p = &obj;
    // p->play();
    p = &obj1;
    p->play();
    // cout<<"The address of obj is "<<p<<endl;
    
    return 0;
}