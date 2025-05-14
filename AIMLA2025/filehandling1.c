#include<stdio.h>
void main(void)
{
FILE *fp;
char ch;
fp=fopen(__FILE__,"r");
do
{
ch=fgetc(fp);
printf("%c",ch);
}while(!feof(fp));
fclose(fp);
}

