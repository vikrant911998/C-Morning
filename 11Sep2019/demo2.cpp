#include<iostream>
using namespace std;

class Employee{
    int salary;
    int hours;

    public:
        void getInfo(int salary,int hrs){
            this->salary = salary;
            this->hours = hrs;
        }

        void addSal(){
            if(this->salary<500)
                this->salary = this->salary + 10;
        }

        void addWork(){
            if(this->hours>6)
                this->salary = this->salary + 5;
        }

};

int main(){

    return 0;   
}