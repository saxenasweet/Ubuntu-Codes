/*
Input:
3
Output:
  *
 **
***
*/
#include<stdio.h>
void main(void)
{
int i,j,n,blank,k;
scanf("%d",&n);
blank=n-1;
for(i=1;i<=n;i++)
{
for(k=1;k<=blank;k++)
 printf(" ");
for(j=1;j<=i;j++)
 printf("*");
blank--;
printf("\n");
}
}

