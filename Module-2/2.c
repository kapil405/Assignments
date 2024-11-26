/*Write a C program that includes 
variables, constants, and comments. 
Declare and use different data types 
(int, char, float) and display their values.*/

// This is a single line comment 

/* This is a 
multiline comment*/

#include<stdio.h>
int main(){
    int a = 2; //integer
    float b = 2.227346; // float 6 values after decimal
    double c = 3.54578978249594; // double upto 6 values after decimal (15)
    char ch = 'A'; // char only hold one character value
    
    const float PI = 3.1415; // constant values cant be changer after initilized

    printf("\ninteger: %d",a);
    printf("\nfloat: %f",b);
    printf("\ndouble: %.15lf",c);
    printf("\nchar: %c",ch);
    printf("\nconstent float(value of pi): %.4f",PI);
    return 0;
}
