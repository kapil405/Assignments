/*Write a C program that uses the break statement to stop printing numbers
when it reaches 5. Modify the program to skip printing the number 3 using the
continue statement.
*/


#include <stdio.h>
int main(){
    int i;
    printf("\n---printing only 1 to 5 number using break---");
    
    for(i=1; i<=10; i++){
        if(i==5){
            break;
        } else {
            printf("\n%d",i);
        }

    }

    printf("\n---skipping number 3 using continue---");
    for(i=1; i<=10; i++){
        if(i==3){
            continue;
        } else{
            printf("\n%d",i);
        }
    }
}