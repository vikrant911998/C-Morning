#include<iostream>
using namespace std;

class A{
    private:
        int id;
        
    public:
        //constructor
        A(){
            cout<<"Default constructor of Class A"<<endl;
        }
        A(int id){
            cout<<"Parameterised constructor of Class A"<<endl;

            this->id = id;
        }

        //Class member functions
        void setId(int id){
            this->id = id;
        }
        
        friend void getId(A object);
};

void getId(A object){
    cout<<"The id is "<<object.id<<endl;
}

int main(){
    A obj(2);
    getId(obj);
    obj.setId(14);
    getId(obj);
    return 0;
}