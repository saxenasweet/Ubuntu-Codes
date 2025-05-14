#include<stdio.h>
void main(void)
{
int s;
FILE *fp;
fp=fopen("hello.txt","r+");
fseek(fp,0,SEEK_END);
s=ftell(fp);
printf("%d\n",s);
fseek(fp,-20,SEEK_CUR);
fprintf(fp,"I ADDED THIS");
fclose(fp);
}
