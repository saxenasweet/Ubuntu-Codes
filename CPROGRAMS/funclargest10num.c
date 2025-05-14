#include<stdio.h>
void main(void)
{
int a[10]={4,2,5,23,65,26,6,34,21,1};
int largest(int x[]);
printf("Largest of 10 numbers is %d\n",largest(a));
}
int largest(int x[])
{
int l=x[0];
for(int i=1;i<10;i++)
{
if(l<x[i])
 l=x[i];
}
return l;
}
