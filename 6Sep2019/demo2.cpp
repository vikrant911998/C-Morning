#include<iostream>
using namespace std;

int main(){
    int *ptr = new int;
    *ptr = 5;
    cout<<"The value is "<<*ptr<<endl;
    delete ptr;
    cout<<"Deleted"<<endl;
    return 0;
}