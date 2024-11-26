/*Write a C program that checks whether a given number is a prime number or not using a for
loop.
Challenge: Modify the program to print all prime numbers between 1 and a given number.
*/

#include <stdio.h>
int main(){
    int num,i,j,isPrime;

    isPrime=1;
    
    printf("\n--- Enter a number ---\n");
    scanf("%d",&num);

    if(num <= 1){
        isPrime=0;
    } 
    else {
        for(i=2; i<= num/2; i++){
            if(num % i == 0){
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime == 1){
        printf("\n%d --> is a prime number.",num);
    } else {
        printf("\n%d --> is not a prime number.\n",num);
    }



    printf("\n---Enter any number to print prime number in range -->");
    scanf("%d",&num);
    printf("\n prime number between 1 and %d \n: ",num);


    
    for(i=2; i <= num; i++) {

        isPrime =1;

        for(j=2; j<=i/2; j++){
            if(i%j == 0){
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1){
            printf("%d ",i);
        }
    }   
    
    return 0;
}