#include<iostream>
using namespace std;

class Employee{

    private:
        float bs,ns;
        static float pf;

    public:
        void input(){
            cout<<"Enter your basic Salary"<<endl;
            cin>>bs;
        }
        float hra(){
            return .3*bs;
        }
        float da(){
            return .2*bs;
        }
        float ta(){
            return .1*bs;
        }
        void netSalary(){
            ns = bs+hra()+da()+ta() -pf;
            cout<<"The net salary is "<<ns<<endl;
        }

};
float Employee::pf = 1400;

int main(){
    Employee e1;
    e1.input();
    e1.netSalary();

    return 0;
}