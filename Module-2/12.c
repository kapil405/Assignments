/*Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents.
*/
#include <stdio.h>
#include <string.h>
int main(){
  FILE *fp1;
  char str[500];
  
  fp1=fopen("sample.txt","w");
  fprintf(fp1,"some demo text line -- 1\n");
  fclose(fp1); //first time closing file here 


  /* NOTE :-- everytime program execute it didnt append content when second time file open 
  because every time first write mode happen and it overwrite file content*/

  //againg opening file to append some new lines to it

  fp1=fopen("sample.txt","a");
  fprintf(fp1,"demo line no --2\n");
  fprintf(fp1,"demo line no --3\n");
  fclose(fp1); //second time closeing file after apending some new text

  // third time opening file to read data

   printf("\n---printing file content to console/terminal---\n");
  
  fp1=fopen("sample.txt","r");
  while(fgets(str,500,fp1)){
    printf("%s",str);
  }
  
  fclose(fp1); // closing file
  
  return 0;
}
