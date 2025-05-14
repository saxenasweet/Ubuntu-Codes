#include<stdio.h>
void main(void)
{
extern int i;
printf("%d\n",i);
}
int i=3;
