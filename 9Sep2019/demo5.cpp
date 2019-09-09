#include<iostream>
using namespace std;

class Account{
    public:
    virtual void rateOfInterest() = 0; // pure virtual function

    void play(){
        cout<<"I am play of abstract"<<endl;
    }

};

class SavingAccount: public Account{

    public:
        void account(){
            cout<<"I am Saving Account"<<endl;
        }
        void rateOfInterest(){
            cout<<"I am Rate Of Interest of Saving Account"<<endl;
        }
};


int main(){
    SavingAccount obj;
    obj.account();
    obj.play();
    obj.rateOfInterest();
    return 0;
}