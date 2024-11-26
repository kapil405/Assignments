/*Write a C program that takes three numbers from the user and determines:
o The largest number.
o The smallest number.
Challenge: Solve the problem using both if-else and switch-case statements.
*/

#include <stdio.h>
int main(){
    int num1,num2,num3;
    int largest,smallest;

    printf("\n---Enter the values of three numbers---\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    printf("\nnum1 --> %d",num1);
    printf("\nnum2 --> %d",num2);
    printf("\nnum3 --> %d\n",num3);

printf("\n----With if else statement----");
// to find largest
    if(num1 > num2 && num1 > num3){
        largest = num1;
    } else if(num2 > num1 && num2 >  num3){
        largest = num2;
    } else {
        largest = num3;
    }

// to find smallest
    if(num1 < num2 && num1 < num3){
        smallest = num1;
    } else if(num2 < num1 && num2 <  num3){
        smallest = num2;
    } else {
        smallest = num3;
    }


    printf("\nLargest  :--> %d",largest);
    printf("\nSmallest :--> %d\n",smallest);

//==============================================================

// num1>num2 && num1>num3 ? 1 : num2>num1 && num2>num3 ? 2 : 3

printf("\n----With switch case statement----");
//to get largest number
switch(num1>num2 && num1>num3 ? 1 : num2>num1 && num2>num3 ? 2 : 3) {
    case 1:
        largest = num1;
    break;

    case 2:
        largest = num2;
    break;

    case 3:
        largest = num3;
    break;
}

// to get smallest number
switch(num1<num2 && num1<num3 ? 1 : num2<num1 && num2<num3 ? 2 : 3) {
    case 1:
        smallest = num1;
    break;

    case 2:
        smallest = num2;
    break;

    case 3:
        smallest = num3;
    break;
}

    printf("\nLargest  :--> %d",largest);
    printf("\nSmallest :--> %d\n",smallest);
    
    return 0;
}