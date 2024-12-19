/*Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task*/

#include <iostream>
using namespace std;
//program to calculate area of rectangle using procidural programing in c++

double rectangle(double l, double w){
    return l * w;
}

int main(){
    double length, width, result;
    cout<<"\nTo calculate area of rectangle enter : "<<endl;
    cout<<"Enter length : ";
    cin>>length;

    cout<<"Enter Widath : ";
    cin>>width;

    result = rectangle(length, width);
    cout<<"\nThe area of rectangle is : "<<result;
    
    return 0;
}
