#include<iostream>
using namespace std;

class A{
    int f;
    static int a;
    public:
        
        A(){
            this->f = 45;
            cout<<"Constructor Called"<<endl;
        }
        ~A(){
            cout<<"Destructor Called"<<endl;
        }
        static void play(){
            
            cout<<"Static Function called  :"<<a<<endl;
        }
};

class B:public A{
    public:
    B():A(){
        cout<<"B constructor called"<<endl;
    }
};

int A::a = 10;

int main(){

    B obj;
    A::play();
    
    return 0;
}