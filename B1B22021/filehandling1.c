#include<stdio.h>
#include<stdlib.h>
void main(void)
{
FILE *fp;
char ch;
fp=fopen("hello.txt","r");
if(fp==NULL)
{
 printf("File cannot be opened");
 exit(0);
}
while(!feof(fp))
{
fscanf(fp,"%c",&ch);
printf("%c",ch);
}
fclose(fp);
}


