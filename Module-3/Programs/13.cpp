/*Write a C++ program that defines functions for basic arithmetic operations (add,
subtract, multiply, divide). The main function should call these based on user input.
*/
#include <iostream>
using namespace std;

//arithmetic functions 
double addition(double n1, double n2){ return n1+n2; }

double subtraction(double n1, double n2){ return n1-n2; }

double multiplication(double n1, double n2){ return n1 * n2; }

double division(double n1, double n2){ return n1 / n2; }

main(){
    double n1, n2;
    char op;

    cout<<"\nEnter value for first number  : ";
    cin>>n1;
    cout<<"Enter value for second number : ";
    cin>>n2;

    cout<<"\nEnter your choice----->"<<endl;
    cout<<"For addition        : +"<<endl;
    cout<<"For subtraction     : -"<<endl;
    cout<<"For multiplication  : *"<<endl;
    cout<<"For division        : /"<<endl;
    cout<<"Enter : ";
    cin>>op;

    cout<<"\n------------------------\n";
    
    switch(op){
        case '+':
            cout<<"Result is : "<<addition(n1,n2);
        break;

        case '-':
            cout<<"Result is : "<<subtraction(n1,n2);
        break;

        case '*':
            cout<<"Result is : "<<multiplication(n1,n2);
        break;

        case '/':
            if(n2 != 0){
                cout<<"Result is : "<<division(n1,n2);
            }else {
                cout<<"Dividing by 0 not allowed";
            }
        break;

    }
    cout<<"\n------------------------";



    return 0;
}