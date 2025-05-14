#include<stdio.h>
void main(void)
{
FILE *fp;
char c;
fp=fopen("hello.txt","r");
while((c=fgetc(fp))!=EOF)
{
printf("%c",c);
}
fclose(fp);
}

