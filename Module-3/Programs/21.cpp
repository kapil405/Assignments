/*Write a program that implements inheritance using a base class Person and derived
classes Student and Teacher. Demonstrate reusability through inheritance.*/
#include <iostream>
using namespace std;

class Person{ //base class
    protected:
        string name;
        int age;
    public: 
        Person (string n, int a){ 
            name = n;
            age = a;
        }

        void display(){
            cout<<"Name : "<<name <<endl;
            cout<<"Age  : "<<age <<endl;
        }
};

class Student : public Person{  //derived class

};

class Teacher : public Person{  //derived class

};

int main(){


    return 0;
}