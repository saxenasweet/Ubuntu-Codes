#include"sc.c"
#include<stdio.h>
void main(void)
{
extern int a; //a is defined in sc.c
printf("%d",a);
}

