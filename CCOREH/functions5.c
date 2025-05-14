#include<stdio.h>
int g=5;
void main(void)
{
void foo(void);
printf("%d",g);
g++;
foo();
printf("%d",g);
}
void foo(void)
{
g++;
printf("In foo..%d\n",g);
}

