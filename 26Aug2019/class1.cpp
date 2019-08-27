#include<iostream>
using namespace std;

struct Student{
    int rollno;
    char name[20];
    char addr[20];
};

int rollno;
char name[20];

Student s1;

class A{
    private:
        int a;

    public:
        void print(){
            cout<<"This is a print of A"<<endl;
        }
};


int main(){ 
    // int a=0;
    // cout<<"Enter a number"<<a<<endl;
    // cin>>a;
    int a;
    A obj1;
    // cout<<"The a value of obj1 is "<<obj.a<<endl;
    obj1.print();



    return 0;
}





// class_keyword class_name{

//     int a;

//     void function(){
        
//     }
// };