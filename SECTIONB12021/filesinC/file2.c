//Write a code to read a file Hello.txt and print its content
#include<stdio.h>
void main(void)
{
FILE *fp;
char ch;
fp=fopen("Hello.txt","r");
while(!feof(fp))
{
ch=fgetc(fp); //fgetc is a function to read one character from the file at a time
printf("%c",ch);
}
fclose(fp); //fclose is a function to close a file
}

