#include<stdio.h>
#include<string.h>
void main(void)
{
int d;
char st1[30];
char st2[30];
gets(st1);
gets(st2);
d=strcmp(st1,st2);
printf("%d\n",d);
if(d==0)
 puts("Both strings are same");
if(d>0)
 puts("st1 comes after st2 in the dictionary");
if(d<0)
 puts("st1 comes before st2 in the dictionary");
}
