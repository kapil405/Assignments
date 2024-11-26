/*Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.*/

#include <stdio.h>
int main(){
    int a = 10;
    int *ptr = &a;

    printf("\nvalue of a   --> %d",a);
    printf("\nAddress of a --> %p",ptr);

    printf("\n\nEnter the value of a: ");
    scanf("%d",&*ptr);

    printf("\n\nvalue of a   --> %d",a);
    printf("\nAddress of a --> %p",ptr);
    return 0;
}