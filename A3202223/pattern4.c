/*
Input:
6
Output:
     *
    ***
   *****
  *******
 *********
***********
*/
#include<stdio.h>
void main(void)
{
int i,j,n,blanks,k;
scanf("%d",&n);
blanks=n-1;
for(i=1;i<=n;i++)
{
for(k=1;k<=blanks;k++)
 printf(" ");
for(j=1;j<=(i*2)-1;j++)
 printf("*");
printf("\n");
blanks--;
}
printf("\n");
}

