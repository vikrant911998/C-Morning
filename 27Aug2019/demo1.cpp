#include<iostream>
using namespace std;


// :: -> scope resolution

class Demo{
    private:
        //instance variable
        int a;
        char c;
        static float f; // class variable,static variable
    
    public:

        //Constructors
        //default constructor
        Demo(){
          cout<<"Demo class Constructor called"<<endl;  
        }

        //parameterised constructor
        Demo(int g){
            a = g;
            cout<<"Demo class parameterised Constructor"<<endl;
        } 

        //member functions
        void play(){
            cout<<"I am play of DEMO"<<endl;
        }
        void setFloat(float d){
            f = d;
        }
        static void print(){

            cout<<"The value of f is "<<f<<endl;
        }
         void print1(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of f is "<<f<<endl;
        }

};

float Demo::f=3.5;

int main(){
    Demo d1,d2,d3,d4(2);


    d4.print1();


    // d1.print();
    // Demo::print();
    // d1.setFloat(4.5);
    // cout<<"***************"<<endl;
    // // d1.print();
    // Demo::print();

    // cout<<"The static variable is "<<<<endl;
    return 0;
}