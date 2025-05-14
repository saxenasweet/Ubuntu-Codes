#include<stdio.h>
void main(void)
{
int i,j,n;
printf("Enter how many rows you want to print?");
scanf("%d",&n);
for(i=n;i>0;i=i-1)
{
for(j=1;j<=i;j=j+1)
{
printf("*");
}
printf("\n");
}
}

