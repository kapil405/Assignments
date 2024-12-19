/*Write a C++ program to display the multiplication table of a given number using a for
loop.*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nTo print mumtiplication table------->";
    cout<<"\nEnter number :-->\n";
    cin>>n;
    cout<<"\nMultiplication table for "<<n<<" :-->\n";

    for(int i=1; i<=10; i++){
        if(i<10){
            cout<<n <<" X " <<"0"<<i <<" = " <<n*i<<endl;
        } else {
            cout<<n <<" X " <<i <<" = " <<n*i<<endl;
        }
    }
    

    return 0;
}