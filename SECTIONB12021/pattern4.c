/*
Write a code to print the following pattern , the number of rows come as an input from the user. 
E.g. 
number of rows=6
Output:
1
01
010
1010
10101
010101

*
**
***
****
*****
******
*/
#include<stdio.h>
void main(void)
{
int n;
int i;
int j;
int p=1;
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
for(j=1;j<=i;j=j+1)
{
printf("%d",p);
if(p==0)
 p=1;
else
 p=0;
}
printf("\n");
}
}

