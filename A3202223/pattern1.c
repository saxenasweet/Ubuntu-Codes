/*
Enter N?
5
*****
*/
/*
Enter N?
5
*
**
***
****
*****
*/
#include<stdio.h>
void main(void)
{
int i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
 printf("*");//printf("%d",j);
printf("\n");
}
}

