#include<iostream>
using namespace std;

class Employee{
    
    char name[20];
    int year;
    int salary;
    char address[30];
    public:
        void input(){
            
            cout<<"Enter your name"<<endl;
            cin.getline(name,sizeof(name));
            fflush(stdin);
            
            cout<<"Enter your address"<<endl;
            cin.getline(address,sizeof(address));

            cout<<"Enter the year of joining"<<endl;
            cin>>year;

            cout<<"Enter the salary"<<endl;
            cin>>salary;


        }

        void print(){
            
            cout<<name<<"   "<<year<<"     "<<address<<endl;
        }

};

int main(){
    Employee e1,e2,e3;
    e1.input();
    
    e2.input();
    
    e3.input();
    cout<<"Name    Year of Joining      Address"<<endl;
    e1.print();
    // e2.print();
    // e3.print();

    return 0;
}