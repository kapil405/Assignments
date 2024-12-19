/*Write a C++ program that demonstrates the use of variables and constants. Create
variables of different data types and perform operations on them*/
#include <iostream>
using namespace std;
int main(){
    //defining variables 
    int num = 10;
    double num1 = 5.5;
    char ch = 'K';
    string name = "kapil";
    bool ans = true;

    //declearing constant 
    const double pi = 3.14;
    

    //douing some operations
    num += 1;
    num1 *= 2.2;
    ch += 32;
    name += " Bhati";
    // ans += 2;
    ans = !true; 

    //displaying value after operation;

    cout<<"\nvalue of num : "<<num <<endl;
    cout<<"value of num1(double) : "<<num1 <<endl;
    cout<<"value of ch : "<<ch <<endl;
    cout<<"value of name : "<<name <<endl;
    cout<<"value of ans(boolean) : "<<ans <<endl;
    cout<<"value of pi (const) : "<<pi <<endl;

    
    return 0;
}