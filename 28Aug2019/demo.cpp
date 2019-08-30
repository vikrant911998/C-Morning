#include<iostream>
using namespace std;

class A{
    public:
        int a;
        static int f;
};
int A::f;

int main(){
    A a1,a2;
    cout<<"THe value of f is "<<A::f<<endl;

    return 0;
}