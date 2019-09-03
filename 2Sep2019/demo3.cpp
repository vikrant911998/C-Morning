#include<iostream>
using namespace std;
//function overriding
class Current1;
class Current2;


class Account{
    int a;
    public:
        int roi(Current1 obj1,Current2 obj2){
            return ((obj1.c1+obj2.c1)/2);
        }
};

class Current1 : public Account{

    public:
        int c1;
        Current1(){
            c1 = 5;
        }
        void roi(){
          
        } 
};

class Current2:public Account{
    public:
        int c1;
        Current2(){
            c1 = 5;
        }

};


int main(){
    Current1 obj1;
    Current2 obj1;
    Account obj3;
    int result = obj3.roi(obj1,obj2);
    return 0;
}