#include<iostream>
using namespace std;

class Average{
    
    public:
        static void calc(float a,float b,float c){
            float average = (a+b+c)/3;
            cout<<"The average is "<<average<<endl;
        }     

};

int main(){
    float a,b,c;

    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    Average::calc(a,b,c);

    return 0;
}