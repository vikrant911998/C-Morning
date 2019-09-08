#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char text[50];
    fstream file;
    file.open("one.txt", ios::app);
    // cout<<"Enter the text"<<endl;
    // cin.getline(text,sizeof(text));
    // cin>>text;
    // cout<<"Text before write"<<text<<endl;

    //writing in file
    file<<"this is without running"<<endl;

    //reading in file
    // file>>text;
    

    cout<<text<<endl;
    file.close();
    // cout<<"File Opened"<<endl;
    return 0;
}