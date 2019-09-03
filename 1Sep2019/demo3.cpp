#include<iostream>
using namespace std;

//class declaration
class B;

class A{
    int a;
    public:
        void setValue(int num){
            this->a = num;
        }
        friend void sum(A obj1,B obj2);
};

class B{
    int b;
    public:
        void setValue(int num){
            this->b = num;
        }
        friend void sum(A obj1,B obj2);
};

void sum(A obj1,B obj2){
    cout<<"The sum is "<<obj1.a+obj2.b<<endl;
}


int main(){
    A obj1;
    B obj2;
    obj1.setValue(5);
    obj2.setValue(7);
    sum(obj1,obj2);

    return 0;
}