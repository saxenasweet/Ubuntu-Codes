/*
Input?
3
Output-

123
12
1
*/
#include<stdio.h>
void main(void)
{
int i,j,n;
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=1;j<=i;j++)
 printf("*");//printf("%d",j);
printf("\n");
}
printf("\n");
}

/*
***
**
*
*/
