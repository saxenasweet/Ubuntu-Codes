#include<stdio.h>
void main(void)
{
int a=8;
int *p;
int **q;
p=&a;
q=&p;
printf("%d\n",**q);
}
