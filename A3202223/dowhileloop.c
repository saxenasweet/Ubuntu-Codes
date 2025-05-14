/*
Syntax:
do
{
body of the loop
.
.
.
}while(condition);
*/
#include<stdio.h>
void main(void)
{
int i=1;
do
{
printf("%d\n",i);
i=i+1;
}while(i<=10);
}

