/*Write a C program that defines a structure to store a student's details (name,
roll number, and marks). Use an array of structures to store details of 3
students and print them.
*/
#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int roll;
    float marks;
}st[30];

int main(){

    int i,size;
    printf("\nEnter the no of students you want to enter: ");
    scanf("%d",&size);

    printf("\n\n<---Enter the details of students--->\n");

    for(i=0; i<size; i++){
        printf("\nEnter details for student no %d",i+1);
        
        getchar();
        printf("\nName   : ");
        gets(st[i].name);
        
        printf("Roll no: ");
        scanf("%d",&st[i].roll);

        printf("Marks  : ");
        scanf("%f",&st[i].marks);

        printf("\n");
    }

    printf("\n\n====================================");
    printf("\n------Students details-------");

    for(i=0; i<size; i++){
        printf("\n(%d)Student no:---> %d",i+1,i+1);
        printf("\n  1. Name ---: %s",st[i].name);
        printf("\n  2. Roll no : %d",st[i].roll);
        printf("\n  3. Marks --: %.2f%%",st[i].marks);
        printf("\n\n");
    }

    
    return 0;
}