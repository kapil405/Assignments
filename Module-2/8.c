/*Write a C program that stores 5 integers in a one-dimensional array and prints
them. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements.
*/

#include <stdio.h>
int main(){
    int a[100],b[100][100],i,j,size,sum=0;

    printf("\n---Enter the size of array :--> ");
    scanf("%d",&size);

    printf("\n---Enter the elements in array---\n");
    for(i=0; i<size; i++){
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    //===================================
    printf("\n---Element in array:--> ");

    for(i=0; i<size; i++){
        printf("%d ",a[i]);
    }
    
    //===================================



    printf("\n---Enter elements in a 2 dimentional array(3X3)---\n");
    size=3;

    for(i=0;i<size; i++){
        for(j=0;j<size; j++){
            printf("b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n---Element in (3X3) MATRIX---\n");
     for(i=0;i<size; i++){
        for(j=0;j<size; j++){

            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("\n---Sum of elements in (3X3) MATRIX---\n");
     for(i=0;i<size; i++){
        for(j=0;j<size; j++){
            sum += b[i][j];
        }
    }

    printf("%d",sum);


    return 0;
}