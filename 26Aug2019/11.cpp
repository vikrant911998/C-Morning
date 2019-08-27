#include<iostream>
#include<string.h>
using namespace std;

class Premium{
    char name[20];
    int age;
    char gender;
    char city;

    public:
        void input(){
            cout<<"Enter your name"<<endl;
            cin>>gets(name);
            cout<<"Enter your age"<<endl;
            cin>>age;
            cout<<"Enter your Gender, M for male and F for female"<<endl;
            cin>>gender;
            cout<<"Enter your City, M for metro and N for non-metro"<<endl;
            cin>>city;
        }

        void compare(){
            if(age > 25 && age < 35 && gender == 'M' && city == 'M')
                cout<<"The premium is 6%"<<endl;
        }


};



int main(){
    Premium p1;
    p1.input();
    p1.compare();
    return 0;
}


// if(strcmp("hello","hello") == 0){
//         cout<<"inside if"<<endl;
//     }
//     cout<<endl;