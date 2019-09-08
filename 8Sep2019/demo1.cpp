#include<iostream>
using namespace std;

template<typename T>

T sum( T x, T y){

    return(x+y);
}


int main(){

    cout<<"The sum is "<<sum(2.5,3.6)<<endl;

    return 0;
}
