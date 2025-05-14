#include<stdio.h>
#include"variables.c"
void main(void)
{
extern int t;
extern int i;
void foo(void);
printf("In main %d and %d\n",t,i);
foo();
printf("In main %d\n",t);
foo();
}
void foo(void)
{
extern int t;
printf("In foo %d\n",t);
t++;
}
int t=5;
