#include<stdio.h>
void main(void)
{
char s[4]={'a','b','c','d'};
int t[4]={1,2,3,4};
char *p;
int *q;
q=&t[0];
p=&s[0];
int i;
for(i=0;i<4;i++)
{
printf("%c %x %d %x\n",*p,p,*q,q);
p++;
q++;
}
}

