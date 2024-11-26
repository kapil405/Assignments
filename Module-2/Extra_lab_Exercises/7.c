/*Write a C program that takes an integer from the user and calculates the sum of its digits
using a while loop.
Challenge: Extend the program to reverse the digits of the number.
*/

#include <stdio.h>
int main(){
    int num,digit,sum=0,rev=0;

    printf("\n<-- Enter any number -->\n");
    scanf("%d",&num);

    printf("\nNumber is :--> %d\n",num);

    while(num > 0){
        digit = num%10;
        rev = (rev*10) + digit;
        sum += digit;
        num /=10;
    }

    printf("\n-----------------------------");
    printf("\nSum of it's digits --> %d",sum);
    printf("\nReverse number is ---> %d",rev);

    
}