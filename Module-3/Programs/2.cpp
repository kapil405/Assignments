//Write a C++ program that accepts user input 
// for their name and age and then displays a personalized greeting
#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int age;

    cout<<"\nWhat is your name : ";
    getline(cin, name);
    cout<<"How old are you : ";
    cin>>age;

    cout<<"\n\nHello "<<name<< ",\nYou are "<<age<< " years old.";
    
    return 0;
}