//Write a code to read the source code of a file
#include<stdlib.h>
#include<stdio.h>
void main(void)
{
FILE *f; //FILE is a special data structure used for FILE HANDLING in C
char c;
char na[30];
printf("Enter file name?");
scanf("%s",na);
f=fopen(na,"r"); //fopen is a function
//hello.txt -> FILE NAME
//r->Mode in which file has to be opened
//f is a file pointer which points to the starting address of the file
if(f==NULL)
{
 printf("File cannot be opened");
 exit(0);
}
else
 printf("File has been opened");
printf("\n");
while(!feof(f))
{
c=fgetc(f); //fgetc is a function used to read one character
printf("%c",c);
}
}
