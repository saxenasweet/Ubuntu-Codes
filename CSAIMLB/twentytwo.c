#include<stdio.h>
void main(void)
{
int a=7;
int b;
b=a++;
printf("%d %d",b,a);
b=++a;
printf("%d %d",b,a);
}

