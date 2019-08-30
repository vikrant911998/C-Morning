#include<iostream>
using namespace std;

// private,protected,public --> access specifiers

class A{
    protected:
        void play(){
            cout<<"I am play of Class A in protected"<<endl;
        }
};

class B:public A{
    public:
        void play1(){
            play();
        }
};

int main(){
    A obj1;
    
    B obj;
    obj.play1();

    return 0;
}