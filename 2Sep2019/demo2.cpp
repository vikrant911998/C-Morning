#include<iostream>
using namespace std;

class A{
    public:
        void add(){
            cout<<"Add function called"<<endl;
        }
        void add(int a, int b){
            cout<<"The sum is "<<a+b<<endl;
        }

        int add(int f){
            return (f*5);
        }
};


int main(){
    A obj;
    obj.add();
    obj.add(4,7);
    int f  =  obj.add(6);
    cout<<"The value of f is "<<f<<endl;
    return 0;
}