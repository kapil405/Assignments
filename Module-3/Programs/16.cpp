/*Write a C++ program that accepts an array of integers, calculates the sum and
average, and displays the results.*/

#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int len,sum=0;
    double average;

    cout<<"\nEnter the length of array :: "<<endl;
    cin>>len;

    cout<<"\nInsert element in array : "<<endl;
    for(int i=0; i<len; i++){
        cout<<"arr["<<i <<"] : ";
        cin>>arr[i];
    }

    cout<<"\nElement in array arr[] : ";
    cout<<"\n----------------------------------\n";
    for(int i=0; i<len; i++){
        cout<<arr[i] <<" ";
        sum += arr[i];
    }
    cout<<"\n----------------------------------\n";

    average = sum / (double)len;
    
    cout<<"\nSum or array elements is : "<<sum;
    cout<<"\nAverage of array is      : "<<average <<endl;


    return 0;
}