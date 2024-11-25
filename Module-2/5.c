/*Write a C program to print numbers from 1 to 10 using all three types of loops
(while, for, do-while).*/

#include <stdio.h>
int main(){
    int i;
    printf("\n---Printing number from 1 to 10---\n");
    printf("\n---Using while loop---");

    i=1;
    while(i<=10){
        printf("\n%d",i);
        i++;
    }
    
    printf("\n\n---Using do while loop---");
    i=1;
    do{
        printf("\n%d",i);   
        i++;
    } while(i<=10);
    

    printf("\n\n---using for loop---");
    for(i=1; i<=10; i++){
        printf("\n%d",i);
    }

    return 0;
}