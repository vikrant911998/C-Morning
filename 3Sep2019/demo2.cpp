#include<iostream>
using namespace std;
int * display(int *);


int main(){
    int a[5]={11,25,37,41,5};
    // display(a);   ->for void 
    int *g = display(a); // ->for int *

    for(int k=0;k<5;k++){
        cout<<a[k]<<endl;
    }
    for(int k=0;k<5;k++){
        cout<<g[k]<<endl;
    }
    return 0;
}

int * display(int *f){

    for(int i=0;i<5;i++){
        f[i] = i*5;
    }

    return f;
}


// void display(int *f){

//     for(int i=0;i<5;i++){
//         cout<<f[i]<<endl;
//     }

    
// }