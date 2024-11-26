/*
Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen()*/

#include <stdio.h>
#include <string.h>
int main(){
    char str1[100],str2[100];
    int length;

    printf("\nEnter the value for str1: ");
    gets(str1);
    printf("\nEnter the value for str2: ");
    gets(str2);    
    
    printf("\nstr1: %s",str1); 
    printf("str2: %s",str2);

    printf("\nConcatenated String : %s",strcat(str1,str2));
    length = strlen(str1);
    printf("\nLength of concatenated string: %d\n",length);

    return 0;
}