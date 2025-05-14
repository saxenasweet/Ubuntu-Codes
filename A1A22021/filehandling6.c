//Write to code to read a file in reverse order
//Write a code to print the size of a file in bytes
#include<stdio.h>
int main(void)
{
FILE *fp;
int l;
char c;
char fname[30];
printf("Enter a file you want me to print in reverse order?");
scanf("%s",fname);
fp=fopen(fname,"r");
if(fp==NULL)
{
printf("File cannot be opened..");
return (0);
}
fseek(fp,0,SEEK_END);
l=ftell(fp); //Tell me where the file pointer is 
printf("%d bytes is the size of the file\n",l-1);
l--;
for(;l>=0;l--)
{
fseek(fp,l,SEEK_SET);
c=fgetc(fp);
printf("%c",c);
}
fclose(fp);
}
