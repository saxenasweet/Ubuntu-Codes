#include<stdio.h>
void main(void)
{
int sum(int n);
int num;
scanf("%d",&num);
printf("Sum of first %d natural numbers is %d\n",num,sum(num));
}
int sum(int n)
{
if(n>0)
 return n+sum(n-1);
else 
 return 0;
}

