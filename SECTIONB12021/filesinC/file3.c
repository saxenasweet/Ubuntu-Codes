//Write a code which asks the user to enter a file and print its content on the screen
#include<stdio.h>
#include<stdlib.h>
void main(void)
{
FILE *fp;
char filename[30];
char ch;
printf("Enter file you want to open?");
scanf("%s",filename);
fp=fopen(filename,"r");
if(fp==NULL)
{
printf("File not found..Exiting!\n");
exit(0);
}
while(!feof(fp))
{
ch=fgetc(fp);
printf("%c",ch);
}
fclose(fp);
}

