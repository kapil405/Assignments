/*Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
resultant matrix.
Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.
*/

#include <stdio.h>
int main(){
    int a[100][100],b[100][100];
    int i,j,k,size;
    int result[100][100];
    char op;

    printf("\nEnter the size of array( MATRIX )");
    scanf("%d",&size);
    
    printf("\nEnter elements in array a\n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter elements in array b\n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\narray a: \n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\narray b: \n");
     for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }


    printf("\nchoose operation");   
    printf("\n'+(addition)',\n'*(matrix only)'");   
    scanf(" %c",&op);

    switch(op){
        case '+':
            for(i=0; i<size; i++){
                for(j=0; j<size; j++){
                    result[i][j] = a[i][j] + b[i][j];
                }
            }

            printf("\nResult of Addition: \n");
            for(i=0; i<size; i++){
                for(j=0; j<size; j++){
                    printf("%d ",result[i][j]);
                }
                printf("\n");
            }
            
        break;

        case '*':
            for(i=0; i<size; i++){
                for(j=0; j<size; j++){
                    result[i][j] = 0;
                    for(k=0; k<size; k++){
                        result[i][j] += (a[i][k]*b[k][j]);
                    }

                }
            }

            printf("\nResult of Multiplication: \n");
            for(i=0; i<size; i++){
                for(j=0; j<size; j++){
                    printf("%d ",result[i][j]);
                }
                printf("\n");
            }
            
        break;

        default:
            printf("\nInvalid input: \n");
        break;

    }    
    
    return 0;
}