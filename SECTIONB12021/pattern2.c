/*
Write a code to print the following pattern:

User will input n (e.g. n=5)

Output:

*
**
***
****
*****

*/
#include<stdio.h>
void main(void)
{
int n;
int i;
int j;
scanf("%d",&n);
for(j=1;j<=n;j=j+1)
{
for(i=1;i<=j;i=i+1)
{
printf("*");
}
printf("\n");
}
}
