#include<stdio.h>
void main(void)
{
union x
{
int e;
char ch;
}y;
printf("%ld\n",sizeof(union x));
}
