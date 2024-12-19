/*Write a program that prints a right-angled triangle using stars (*) 
with a nested loop.*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nEnter number of rows for triangle: "<<endl;
    cin>>n;
    cout<<"\nAn triangle of "<<n <<" rows"<<endl;
    cout<<"--------------------------------"<<endl;

    for(int i=0; i<n; i++){
        
        for(int k=0; k<=i; k++){
            cout<<"* ";
        }
        
        cout<<endl;
        
    }

    
    
    return 0;
}