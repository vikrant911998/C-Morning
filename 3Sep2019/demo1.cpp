#include<iostream>
using namespace std;



int main(){
    int a = 65 ;
    cout<<"The value of a is "<<(char)a<<endl;

    // cin>>a;//5000->4
    int *p = &a;

    cout<<"The address is "<<p<<endl;
    return 0;
}