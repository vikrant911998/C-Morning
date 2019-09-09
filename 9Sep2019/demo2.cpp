#include<iostream>
using namespace std;

int main(){
    char name[20]="vikrant singh";//{v,i,k,r,a,n,t, ,s,i,n,g,h,'\0'}
    char *p;
    p = name;

    //'\0' -> NUll POinter ->ASCII VALUE = 0
    while(p != '\0'){
        cout<<*p;
        p++;
    }

    return 0;
}