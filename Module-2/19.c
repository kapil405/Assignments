/*Write a C program that takes an integer from the user and calculates the sum of its digits
using a while loop.
Challenge: Extend the program to reverse the digits of the number.
*/

#include <stdio.h>
int main(){
    int num,digit,sum=0,rev=0;

    printf("\nEnter num:");
    scanf("%d",&num);

    printf("\nNumber is : %d",num);

    while(num > 0){
        digit = num%10;
        rev = (rev*10) + digit;
        sum += digit;
        num /=10;
    }

    printf("\n\n%d",sum);
    printf("\n\n%d",rev);

    
}