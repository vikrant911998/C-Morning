#include<iostream>
using namespace std;

template<typename T1,typename T2>

T1 sum(T1 x, T2 y){
    //typecasting
    return (T1)(x+y); 
}


int main(){
    cout<<"The sum is "<<sum(2,5.3)<<endl;

    return 0;
}