/*Write a C++ program that defines a class Calculator with functions for addition,
subtraction, multiplication, and division. Create objects to use these functions*/
#include <iostream>
using namespace std;
//calculator class
class Calculator{
    private:
        double n1,n2;
    public:
        Calculator(){}
    
        Calculator(double n1, double n2 ){
            this->n1 = n1;
            this->n2 = n2;
        }

        double addition(){ return n1+ n2; }

        double subtraction(){ return n1-n2; }

        double multiplication(){ return n1*n2; }

        double division(){ return n1/n2; }   
        
};


int main(){

    
    double n1,n2;
    char op;
    
    cout<<"\nEnter vlue of first number  : ";
    cin>>n1;
    cout<<"Enter vlue of second number : ";
    cin>>n2;

    //creating calc object of calculator class and calling perametrised constructore;
    Calculator calc(n1,n2);

    cout<<"\n:----Choose your operation----:"<<endl;
    cout<<"For Addition         : '+'"<<endl;
    cout<<"For Subtraction      : '-'"<<endl;
    cout<<"For Multipliction    : '*'"<<endl;
    cout<<"For Division         : '/'"<<endl;
    cout<<"Enter choice : ";
    cin>>op;

    cout<<"\n--------------------------\n";
    switch(op){
        case '+':
            cout<<"Result is : "<<calc.addition();
        break;

        case '-':
            cout<<"Result is : "<<calc.subtraction();
        break;

        case '*':
            cout<<"Result is : "<<calc.multiplication();
        break;

        case '/':
            if(n2!=0){
                cout<<"Result is : "<<calc.division();
            } else {
                cout<<"Dividing by 0 is not allowed";
            }
        break;

    }
    cout<<"\n--------------------------\n";

    return 0;
}