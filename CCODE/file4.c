#include<stdio.h>
void main(void)
{
FILE *fp;
char ch;
fp=fopen("hello.txt","r");
fseek(fp,5,SEEK_SET);
ch=fgetc(fp);
printf("%c\n",ch);
fseek(fp,-3,SEEK_END);
ch=fgetc(fp);
printf("%c\n",ch);
fclose(fp);
}

