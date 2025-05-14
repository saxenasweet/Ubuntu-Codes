#include<stdio.h>
void main(void)
{
int a[5]={1,2,3,4,5};
void printarray(int *p);
printarray(&a[0]);
for(int i=0;i<5;i++)
 printf("%d\n",a[i]);
}
void printarray(int *p)
{
int i;
for(i=0;i<5;i++,p++)
 (*p)=(*p)+1;
}
