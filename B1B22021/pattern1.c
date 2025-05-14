/*

*****
****
***
**
*

12345
1234
123
12
1
*/
#include<stdio.h>
void main(void)
{
int i,j,n;
scanf("%d",&n);
for(i=n;i>0;i=i-1)
{
for(j=1;j<=i;j=j+1)
{
 printf("%d",j);
}
printf("\n");
}
}
