#include<stdio.h>
void main(void)
{
union xyz
{
int a;
char ch;
}abc;
abc.a=12;
printf("%d\n",abc.a);
abc.ch='M';
printf("%c\n",abc.ch);
printf("%d\n",abc.a); //Garbage value
}

