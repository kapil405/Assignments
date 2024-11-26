/*Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results.*/

#include<stdio.h>
int main(){
    int num1,num2;

    printf("Enter value for num1: ");
    scanf("%d",&num1);
    printf("Enter value for num2: ");
    scanf("%d",&num2);
    
    printf("\nnum1: %d",num1);
    printf("\nnum2: %d",num2);

    printf("\n\n----Arithmetic Operations----");
    printf("\nAddition of %d and %d : %d",num1,num2,num1+num2); //addition
    printf("\nSubtraction of %d and %d : %d",num1,num2,num1-num2); //subtraction
    printf("\nMultiplication of %d and %d : %d",num1,num2,num1*num2);//multiplication
    printf("\nDivision of %d and %d : %.2f",num1,num2,num1/(float)num2);//division
    printf("\nModulo of %d and %d : %d",num1,num2,num1%num2);//modulos
    
    printf("\n\n----Relational Operations----");
    //relational operation gives output in 1 or 0 (true or false)
    printf("\n%d < %d : %d",num1,num2,num1<num2);   //lessthen
    printf("\n%d > %d : %d",num1,num2,num1>num2);   //greaterthen
    printf("\n%d >= %d : %d",num1,num2,num1>=num2); //greaterthen equal to
    printf("\n%d <= %d : %d",num1,num2,num1<=num2); //lessthen equal to
    printf("\n%d == %d : %d",num1,num2,num1==num2); //equality check
    printf("\n%d != %d : %d",num1,num2,num1!=num2); //not equality check

    printf("\n\n----Logicl Operations----");
    //logical operations gives output in 1 or 0 (true or false)
    printf("\n(%d && %d): %d",num1,num2,num1&&num2); //and operator 
    printf("\n(%d || %d): %d",num1,num2,num1||num2); //or operator
    printf("\n!(%d): %d",num1,!num1); //not operator
    printf("\n!(%d): %d",num2,!num2); //not operator

    return 0;
}