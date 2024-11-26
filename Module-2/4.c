/*Write a C program to check if a number is even or odd using an if-else
statement. Extend the program using a switch statement to display the month
name based on the user’s input (1 for January, 2 for February, etc.).*/

#include <stdio.h>
int main(){
    int num1,choice;

    printf("\n---Enter value for num1 :---\n");
    scanf("%d",&num1);

    printf("\nnum1: %d",num1);
    
    if(num1%2==0){
        printf("\n%d --> is even number",num1);
    }else {
        printf("\n%d --> is odd number",num1);
    }

    printf("\n");
    printf("\n---Enter choice to print month---\n");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            printf("\nJanuary");
        break;

        case 2:
            printf("\nFebruary");
        break;

        case 3:
            printf("\nMarch");
        break;

        case 4:
            printf("\nAprile");
        break;

        case 5:
            printf("\nMay");
        break;

        case 6:
            printf("\nJune");
        break;

        case 7:
            printf("\nJuly");
        break;

        case 8:
            printf("\nAugust");
        break;

        case 9:
            printf("\nSepetmber");
        break;

        case 10:
            printf("\nOctober");
        break;

        case 11:
            printf("\nNovember");
        break;

        case 12:
            printf("\nDecember");
        break;
        default:
            printf("\nMonths only print from 1 to 12");
    }
    
    return 0;
}