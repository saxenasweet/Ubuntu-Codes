//Write a code to copy a file to another file
//Write a code to print a file in reverse order
//Write a code to store name,roll number, and pcm per of students of a class. Print the 
//details.
#include<stdio.h>
void main(void)
{
FILE *f,*g;
char f1[30],f2[30];
char c;
printf("Enter source file name?");
scanf("%s",f1);
printf("Enter destination file name?");
scanf("%s",f2);
f=fopen(f1,"r");
g=fopen(f2,"w");
while(!feof(f))
{
c=fgetc(f);
fprintf(g,"%c",c); //Read one char from f1 and write to f2
}
fclose(f);
fclose(g);
}

