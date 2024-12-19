/*Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
  operators. Perform operations using each type of operator and display the results*/

#include <iostream>
using namespace std;
int main(){
    int a;
    int b;

    cout<<"\nEnter value for a : ";
    cin>>a;
    cout<<"Enter value for b : ";
    cin>>b;

    //original values of a and b
    cout<<"\n\nvalue of a : "<<a <<"\nvalue of b : "<<b<<endl;

    cout<<"\n---Arithmetic Operations---"<<endl;
    cout<<"("<<a <<" + " <<b <<") : "<<a+b<<endl;
    cout<<"("<<a <<" - " <<b <<") : "<<a-b<<endl;
    cout<<"("<<a <<" * " <<b <<") : "<<a*b<<endl;
    cout<<"("<<a <<" / " <<b <<") : "<<float(a/(float)b)<<endl;
    cout<<"("<<a <<" % " <<b <<") : "<<a%b<<endl;
    cout<<"(++"<<a <<")    : "<<++a<<endl;
    cout<<"(--"<<b <<")    : "<<--b<<endl;
    --a;
    ++b;

    cout<<"\n\n---Relational Operations---"<<endl;
    cout<<"("<<a <<" < "  <<b <<")   : "<< (a< b ? "true":"false") <<endl;
    cout<<"("<<a <<" > "  <<b <<")   : "<< (a> b ? "true":"false") <<endl;
    cout<<"("<<a <<" <= " <<b <<")  : "<< (a<= b ? "true":"false") <<endl;
    cout<<"("<<a <<" >= " <<b <<")  : "<< (a>= b ? "true":"false") <<endl;
    cout<<"("<<a <<" == " <<b <<")  : "<< (a == b ? "true":"false") <<endl;
    cout<<"("<<a <<" != " <<b <<")  : "<< (a != b ? "true":"false") <<endl;

    cout<<"\n\n---Logical Operations---"<<endl;
    cout<<"("<<a <<" && "  <<b <<")   : "<< (a&&b ? "true":"false") <<endl;
    cout<<"("<<a <<" || "  <<b <<")   : "<< (a||b ? "true":"false") <<endl;
    cout<<"!("<<a <<")        : "<< (!(a)?"true":"false") <<endl;
    cout<<"!("<<b <<")        : "<< (!(b)?"true":"false") <<endl;

    cout<<"\n\n---Bitwise Operation---";
    cout<<"("<<a <<" & "<<b <<") : "<<(a&b) <<endl;
    cout<<"("<<a <<" | "<<b <<") : "<<(a|b) <<endl;
    cout<<"("<<a <<" ~ "<<b <<") : "<<(~b) <<endl;
    cout<<"("<<a <<" ^ "<<b <<") : "<<(a^b) <<endl;
    cout<<"("<<a <<" << 2" <<") : "<<(a<<2) <<endl;
    cout<<"("<<b <<" >> 2" <<") : "<<(b>>2) <<endl;
    
    return 0;
}