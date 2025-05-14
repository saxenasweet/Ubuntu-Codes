/*
    *
   ***
  *****
 *******
*********
*/
#include<stdio.h>
void main(void)
{
int i,j,k,n,spaces;
scanf("%d",&n);
spaces=n-1;
for(i=1;i<=n;i=i+1)
{
for(k=1;k<=spaces;k=k+1)
{
 printf(" ");
}
for(j=1;j<=(i*2)-1;j=j+1)
{
printf("*");
}
spaces=spaces-1;
printf("\n");
}
}
