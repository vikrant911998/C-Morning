#include<iostream>
using namespace std;

class A{
    private:
        char c;
    public:
        void display(){
            cout<<"the display of Class A"<<endl;
        }
};

class B:public A{
    public:
        void display1(){
            cout<<"The display of Class B"<<endl;
        }
};

class C:public A{
    public:
        void display1(){
            cout<<"The display of Class C"<<endl;
        }
};

int main(){
    B obj1;
    C obj2;
    obj1.display();
    obj1.display1();
    cout<<"***************"<<endl;
    obj2.display();
    obj2.display1();

    return 0;
}