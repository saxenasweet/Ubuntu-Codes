#include<stdio.h>
void main(void)
{
FILE *fp;
int l,p,t=1;
char ch;
fp=fopen("hello.txt","rb");
fseek(fp,-1,SEEK_END);
for(l=ftell(fp);l>=0;l--)
{
fseek(fp,l,SEEK_SET);
ch=fgetc(fp);
printf("%c",ch);
}
fclose(fp);
}
