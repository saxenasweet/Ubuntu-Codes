#include<string.h>
#include<stdio.h>
void main(void)
{
char ch[3]="SRMIST NCR";
int x,y;
x=strlen(ch);
y=sizeof(ch);
printf("%d %d",x,y);
}

