/*Write a C program that takes an integer from the user and checks the following using
different operators:
o Whether the number is even or odd.
o Whether the number is positive, negative, or zero.
o Whether the number is a multiple of both 3 and 5.
*/

#include <stdio.h>
int main(){
    int num;
    printf("\nEnter an integer number : ");
    scanf("%d",&num);

    printf("\nThe number you entered is : %d\n",num);

    printf("\n-----------------------------------");
    if(num%2 == 0){
        printf("\n%d --> is a even number",num);
    } else {
        printf("\n%d --> is a odd number",num);
    }
    

    if(num<0){
        printf("\n%d --> is a negative number",num);
    } else if(num>0){
        printf("\n%d --> is a positive number",num);
    } else {
        printf("\nnumber is zero");
    }


    if(num%3==0 && num%5==0){
        printf("\n%d --> is a multiple of both 3 and 5",num);
    } else {
        printf("\n%d --> is not a multiple of 3 and 5",num);
    }
    printf("\n-----------------------------------");

    return 0;
}