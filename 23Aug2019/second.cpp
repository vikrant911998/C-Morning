#include<iostream>
using namespace std;
//function declaration
void print(char *);

int main(){
    char a[]={'a','b','c','d'}; 

    print(a);
    return 0;
}

//function definition
void print(char *a){
    
    for(int i=0;i<4;i++){
        // cout<<a[i]<<" "<<endl;
        printf("%d  ",a[i]);
    }

}