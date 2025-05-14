#include<stdio.h>
#include<string.h>
void main(void)
{
char st1[30],st2[30];
int d;
gets(st1);
gets(st2);
d=strcmp(st1,st2); //Compare ASCII values of characters
printf("%d\n",d);
}

