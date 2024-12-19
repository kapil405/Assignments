/*Write a program that demonstrates the difference between local and global
variables in C++. Use functions to show scope*/
#include <iostream>
using namespace std;

string i = "global scope";

void local(){
    string i = "local scope";
    string name = "local kapil";

    cout<<"\nIn local function : "<<endl;
    cout<<"Scope of i is    : "<<i<<endl;
    cout<<"Scope of name is : "<<name<<endl;

}

void global(){

    cout<<"\nIn global function : "<<endl;
    cout<<"Scope of i is : "<<i<<endl;
    
}


int main(){
    string name = "local kapil in main";
    cout<<"\nInside main function : "<<endl;
    cout<<"Scope of i is    : "<<i<<endl;
    cout<<"Scope of name is : "<<name<<endl;

    local();
    global();

    return 0;
}