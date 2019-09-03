#include<iostream>
using namespace std;

int main(){
    int a[10],num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    int i=0;

    while(num != 0){
        int temp = num%10;
        a[i] = temp;
        num = num/10;
        i++;
    }

    for(int k=0;k<10;k++){
        cout<<a[k]<<endl;
    }

    return 0;
}