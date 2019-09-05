#include<iostream>
using namespace std;

int main(){
    int a[10]={4,5,76,-1,0,86,91,0,-23,34};
    int pcount=0,ncount=0,ocount=0,ecount=0,count=0;

    for(int i=0;i<10;i++){
        if(a[i]>0){
            pcount++;
            cout<<a[i]<<endl;
        }
            
        if(a[i]<0)
            ncount++;
        if(a[i] == 0)
            count++;
        if(a[i]%2 ==0)
            ecount++;
        if(a[i]%2 != 0)
            ocount++;
    }
    cout<<"The Positive numbers in an array are "<<pcount<<endl;

    return 0;
}