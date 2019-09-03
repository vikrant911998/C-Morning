#include<iostream>
using namespace std;

class A{
    //instance variable
    int a;
    public:
        A(int a){
            this->a = a;
        }
};


int main(){

    A obj(5);
    return 0;
}