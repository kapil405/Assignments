/*Write a C++ program that performs both implicit and explicit type conversions and
prints the results.*/
#include <iostream>
using namespace std;
int main(){
    int x,y;
    double z;

    cout<<"\nEnter value for x : ";
    cin>>x;
    cout<<"Enter value for y : ";
    cin>>y;

    //implicite type conversion
    cout<<"\nImplicit type conversion when "<<x <<"/"<<y;
    z = x / y; 
    cout<<"\nZ is : "<<z;

    //explicite type conversion
    cout<<"\n\nExplicite type conversion when "<<x <<"/"<<y;

    z = x / (double)y;
    cout<<"\nZ is : "<<z;
    
    return 0;
}