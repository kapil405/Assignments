/*Write a C program that takes an integer input from the user and prints its multiplication
table using a for loop.
Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).
*/

#include <stdio.h>
int main(){
    int num,range;

    printf("\nEnter any number: ");
    scanf("%d",&num);

    printf("\nEnter the range of table: ");
    scanf("%d",&range);
    
    printf("\nmultiplication table of %d -->",num);
    printf("\n-----------------------------------");
    for(int i=1; i<=range; i++){

        if(i<=9){
            printf("\n%d  x  0%d --> %d",num,i,i*num);
        }else {
            printf("\n%d  x  %d --> %d",num,i,i*num);
        }
        
    }
    printf("\n-----------------------------------");


    printf("\n--Enter the rang of table---");



    
       
    return 0;
}