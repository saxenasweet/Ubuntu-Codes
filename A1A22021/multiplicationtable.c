#include<stdio.h>
void main(void)
{
int n,i=1;
printf("Enter a number whose table you want?");
scanf("%d",&n);
do
{
printf("%dX%d=%d\n",n,i,n*i);
i=i+1;
}while(i<=10);
}

