/*
Write a code to print a pyramind of asteriks . The number of rows will come as an input from the user.
Input:5
Output:

    *
   ***
  *****
 *******
*********

*/
#include<stdio.h>
void main(void)
{
int n,i,j,spaces;
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
for(spaces=1;spaces<=(n-i);spaces=spaces+1)
{
printf(" ");
}
for(j=1;j<=(i*2)-1;j=j+1)
{
printf("*");
}
printf("\n");
}
}

