#include<iostream>

using namespace std;

//parent Class or super class
class Car{
    private:
        int speed;
        char color[10];
    public:
        void input(){
            cout<<"Enter the color of the car"<<endl;
            cin>>color;
        }
        void display(){
            cout<<"The color of class is "<<color<<endl;
        }
};


//Child class or sub class
class LuxuryCar:public Car {
    private:
        char design[10];
        char type[10];
        int automatic;
    public:
        void input1(){
            cout<<"Enter the design of the car"<<endl;
            cin>>design;
            cout<<"Enter the type of the car"<<endl;
            cin>>type;
            automatic = 1;
        }
        void display1(){
            cout<<"The design of the car is "<<design<<endl;
            cout<<"The type of the car is  "<<type<<endl;
            if(automatic == 1)
                cout<<"The car is Automatic"<<endl;
            
        }
        
};  

int main(){
    // Car c1;
    // c1.input();
    // c1.display();
    LuxuryCar lc1;
    lc1.input();
    lc1.input1();
    lc1.display();
    lc1.display1();
    return 0;
}