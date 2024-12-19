/*Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task*/

#include <iostream>
using namespace std;
//program to calculate area of rectangle in object oreanted programing in c++

class Rectangle {
    private :
        double width, length;
    public:
        Rectangle(double w, double l){
            width = w;
            length = l;
        }

        void area(){ 
            cout<<"\nArea of rectangle is : " <<width * length;
        }
};

int main(){
    double length, width, result;
    cout<<"\nTo calculate area of rectangle enter : "<<endl;
    cout<<"Enter length : ";
    cin>>length;

    cout<<"Enter Widath : ";
    cin>>width;

    //creating object of rectangle class and calling parameterise constructore
    Rectangle r1(width, length);

    cout<<"\n---------------------------------";
    r1.area();
    cout<<"\n---------------------------------";
    return 0;
}