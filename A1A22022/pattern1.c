/*
*
**
***
****
*****
******


*****
****
***
**
*
     *
    ***
   *****
  *******
 *********
***********
1
12
123
1234
12345
*/
#include<stdio.h>
void main(void)
{
int i,j,n;
printf("Enter how many rows?");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
for(j=1;j<=i;j=j+1)
{
 printf("%d",j);
}
printf("\n");
}
}

