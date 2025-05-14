#include<stdio.h>
void main(void)
{
int a=6;
float b=9.5;
float *p;
void *t;
//p=&a; //Illegal
t=&a;
printf("%d\n",*(int *)t);
t=&b;
printf("%f\n",*(float *)t);
}
