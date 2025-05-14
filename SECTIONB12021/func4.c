//Life time or scope of variables
#include<stdio.h>
void main(void)
{
int i=3;
if(i==3)
{
int i=6; //i is a local variable and it's scope is within the block in which it is defined
printf("%d\n",i);
i=i+1;
}
printf("%d\n",i);
}
/*
Output -
6
3
*/
