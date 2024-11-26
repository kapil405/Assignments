/*Write a C program that accepts 10 integers from the user and stores them in an array. The
program should then find and print the maximum and minimum values in the array.
Challenge: Extend the program to sort the array in ascending order.
*/
#include <stdio.h>
int main(){
    int a[100],b[100],j,i,temp;
    int min,max;

    printf("\n---Enter the elements in array---\n");
    for(i=0; i<10; i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }

    printf("\n---Elements in array---\n");
    for(i=0; i<10; i++){
        printf("%d ",a[i]);
    }


    for(i=0; i<10; i++){
        for(j=i+1; j<10; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n");
    min = a[0];
    max = a[9];

    printf("\n---Minimum value is array---> %d",min);
    printf("\n---Maximum value is array---> %d",max);

    printf("\n\n---Elements in array in assending order---\n");
    for(i=0; i<10; i++){
        printf("%d ",a[i]);
    }


    return 0;
}