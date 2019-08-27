#include<iostream>
using namespace std;

// struct Student{
//     int rollno;
//     char name[20];
//     char address[50];
// };

class Student{
    private:
        int rollno;
        char name[20];
        char address[50];

    public:
        void input(){
            cout<<"Enter the rollno"<<endl;
            cin>>rollno;
            cout<<"Enter your name"<<endl;
            //to take input in an array
            cin>>gets(name);
        }

        void print(){
            cout<<"The roll no is "<<rollno<<endl;
            //to print whole array
            cout<<"The name is "<<puts(name)<<endl;
        }
};

int main(){
    Student s1;
    s1.input();
    s1.print();

    return 0;
}