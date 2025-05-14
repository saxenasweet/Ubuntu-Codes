#include<stdio.h>
void main(void)
{
//Sum of natural numbers between N and M
int n,m,i,s=0;
scanf("%d %d",&n,&m);
i=n;
do
{
printf("%d\n",i);
s=s+i;
i=i+1;
}while(i<=m);
printf("\nSum of natural numbers between %d and %d is %d\n",n,m,s);
}

