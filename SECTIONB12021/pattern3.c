/*
Print the following pattern, the user will enter the value of number of rows. (number of rows=6)
Output:

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
int blank;
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
for(blank=1;blank<=(n-i);blank=blank+1)
{
 printf(" ");
}
for(j=1;j<=i;j=j+1)
{
printf("*");
}
printf("\n");
}
}

