#include<string.h>
#include<stdio.h>
void main(void)
{
char st1[30];
char st2[30];
int c;
scanf("%s",st1);
scanf("%s",st2);
c=strcmp(st1,st2);
printf("%d\n",c);
}

