/*Write a C++ program that takes a student’s marks as input and calculates the grade
based on if-else conditions.*/
#include <iostream>
using namespace std;
int main(){
    int mark1,mark2,mark3,total=0;
    char grade;
    double prs;

    cout<<"\nEnter the Marks of three subjects to calculate grade : ";
    cout<<"\nEnter marks for subject 1 : ";
    cin>>mark1;
    cout<<"Enter marks for subject 2 : ";
    cin>>mark2;
    cout<<"Enter marks for subject 3 : ";
    cin>>mark3;

    //calculating total and percentage;
    total = mark1 + mark2 + mark3;
    prs = total / (float)3;

    //determine grade;
    if(prs>=80 && prs<=100){
        grade = 'A';
    } else if(prs>=60 && prs<80 ){
        grade = 'B';
    } else if(prs>=50){
        grade = 'C';
    } else {
        grade = 'F';
    }

    //showing result
    cout<<"\n\n----Your Record----";
    cout<<"\nTotal      : "<<total;
    cout<<"\nPercentage : "<<prs;
    cout<<"\nGrade      : "<<grade;

    
    return 0;
}