#include<stdio.h>
void main(void)
{
FILE *fp;
char ch;
int l,d,c=0;
fp=fopen("hello.txt","r");
fseek(fp,0,SEEK_END);
l=ftell(fp);
d=l;
while(c!=l)
{
fseek(fp,0,SEEK_SET);
d=d-1;
fseek(fp,d,SEEK_CUR);
ch=fgetc(fp);
printf("%c",ch);
c++;
}
fclose(fp);
}
