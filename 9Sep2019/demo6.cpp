#include<iostream>
using namespace std;

class Student{
    string name;
    public:
        Student(){
            this->name = "Unknown";
        }

        Student(string name){
            this->name = name;
        }
        void print(){
            cout<<"The name is "<<this->name<<endl;
        }
};

int main(){
    Student s1,s2("brian");
    s1.print();
    s2.print();
    return 0;
}


