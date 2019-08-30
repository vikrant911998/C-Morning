#include<iostream>
using namespace std;

class Demo{

    private:
        int a;
        char c;
    public:
        Demo(){
            cout<<"Default constructor of Class Demo"<<endl;
        }

        //~ -> tilde
        ~Demo(){
            cout<<"Destructor of Class Demo"<<endl;
        }
        
        void show(){
            cout<<"This is the show of Demo"<<endl;
        }
};


int main(){
    Demo obj;
    obj.show();
    return 0;
}