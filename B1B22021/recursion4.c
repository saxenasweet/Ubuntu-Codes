#include<stdio.h>
void main(void)
{
int fact(int n);
int no;
scanf("%d",&no);
printf("%d\n",fact(no));
}
int fact(int n)
{
if (n>0)
 return n*fact(n-1);
else
 return 1;
}
