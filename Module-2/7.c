/*Write a C program that calculates the factorial of a number using a function.
Include function declaration, definition, and call.*/

//function to calculate factorial by given number
int fact(int num){
    int fact=1;
    for(int i=1; i<=num; i++){
        fact *= i;
    }

    return fact;
}

#include <stdio.h>
int main(){
    int num;
    printf("\n---Enter the number to get factorial---\n");
    scanf("%d",&num);

    int ans = fact(num);
    printf("\n---Factorial of %d is: ---\n%d",num,ans);
    
    return 0;
}
