/*Write a C program that acts as a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation (addition,
subtraction, multiplication, division, or modulus) using operators.
Challenge: Extend the program to handle invalid operator inputs.
*/

#include <stdio.h>
int main(){
    int num1,num2;
    char ch;

    printf("Enter first  number :--> ");
    scanf("%d",&num1);
    printf("Enter second number :--> ");
    scanf("%d",&num2);

    start :
    printf("\n---Choose operation---");
    printf("\n('+', '-', '*', '/', '%%')\n");
    scanf(" %c",&ch);
    printf("\n==========================\n");

    switch(ch){
        case '+':
            printf("\nAddition of %d and %d is = %d",num1,num2,num1+num2);
        break;

        case '-':
            printf("\nSubtraction of %d and %d is = %d",num1,num2,num1-num2);
        break;

        case '*':
            printf("\nMultiplication of %d and %d is = %d",num1,num2,num1*num2);
        break;

        case '/':
            if(num2 != 0){
                printf("\nDivision of %d and %d is = %.2lf",num1,num2,(double)num1/(double)num2);
            } else {
                printf("\n***Division by zero not allow and lead to Error.***");
            }
        break;

        case '%':
            if(num2 != 0){
                printf("\nModulus of %d and %d is remender = %d",num1,num2,num1%num2);
            } else {
                printf("\n***modulus by zero not allow and lead to Error.***");
            }
        break;

        default:
            printf("\n***Envalid input.***\n");
            printf("\n--Re enter choice--\n");
            goto start;
    }
        printf("\n==========================\n");

    return 0;
}