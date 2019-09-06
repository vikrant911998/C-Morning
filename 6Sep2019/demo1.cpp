#include<iostream>
using namespace std;

class A{
    
    public:
        int a;
        A(){
            cout<<"Constructor Called"<<endl;
        }
        ~A(){
            cout<<"Destructor Called "<<endl;
        }

};


int main(){
    A *ptr = new A();
    ptr->a = 5;
    cout<<"The value of a is "<<ptr->a<<endl;
    delete ptr;
    return 0;
}