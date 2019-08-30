#include<iostream>
using namespace std;
//Overloading
class A{
    public:
        void add(){
            int a=2,b=9;
            cout<<"The sum is "<<a+b<<endl;
        }

        void add(int a, int b){
            cout<<"The sum in overloaded function is "<<a+b<<endl;
        }
};

int main(){
    A obj;
    obj.add();
    obj.add(4,61);


    return 0;
}