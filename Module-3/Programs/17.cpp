/*Write a C++ program to perform matrix addition on two 2x2 matrices.*/
#include <iostream>
using namespace std;
int main(){
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int len=2, sum=0;

    cout<<"\nSize of matrix is (2X2) : 2 "<<endl;

    cout<<"\nEnter element in array a[]: "<<endl;
    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){
            cout<<"a["<<i <<"]" <<"["<<j <<"] : ";
            cin>>a[i][j];
        }
    }


    cout<<"\nEnter element in array b[]: "<<endl;
    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){
            cout<<"b["<<i <<"]" <<"["<<j <<"] : ";
            cin>>b[i][j];
        }
    }


    //printing elements of a
    cout<<"\nElement in array a[] : "<<endl;
    cout<<"----------\n";
    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){
            cout<<a[i][j] <<"  ";
        }
        cout<<endl;
    }
    cout<<"----------\n";


    //printing elements of b 
    cout<<"\nElement in array b[] : "<<endl;
    cout<<"----------\n";
    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){
            cout<<b[i][j] <<"  ";
        }
        cout<<endl;
    }
    cout<<"----------\n";

    //matrix addition of two 2x2 matrix
    cout<<"\nMatrix addition of array a[] and array b[] is : "<<endl;

    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){

            c[i][j] = a[i][j] + b[i][j];
            
        }
    }

//result of addition
    cout<<"----------\n";
    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){

            if(c[i][j] < 10){
                cout<<"0"<<c[i][j] <<"  ";
            } else {
                cout<<c[i][j] <<"  ";
            }


        }
        cout<<endl;
    }
    cout<<"----------\n";
    

    
}