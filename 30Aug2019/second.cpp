#include<iostream>
using namespace std;
//Overriding
class A{
    public:
        void play(){
            cout<<"The play of Class A"<<endl;
        }
};

class B:public A{
    public:
        void play(){
            cout<<"The play of Class B"<<endl;
        }
};

int main(){
    B obj;
    obj.play();
    return 0;
}