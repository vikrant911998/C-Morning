#include<iostream>
using namespace std;

template <class T>

class A{
    T a;
    public:
        //parameterised constructor
        A(T a){
          this->a = a;  
        }

        T play(){
            return(this->a*5);
        }
};

int main(){

    A<int> obj(5);
    cout<<"The play value is "<<obj.play()<<endl;
    return 0;
}