#include<stdio.h>
void main(void)
{
extern int i;//Look for i else where but not in main
if(i==9)
{
int i=11;
printf("\n%d",i); //i is 11
}
printf("%d\n",i); // i is 9
}

int i=9;
