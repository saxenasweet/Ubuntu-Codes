     1
    123
   12345
  1234567
 123456789
1234567891011

#include<stdio.h>
void main(void)
{
int b,i,j,n,k;
printf("Enter the number of rows?");
scanf("%d",&n);
k=n;
for(i=1;i<=n;i=i+1)
{
k=k-1;
for(b=1;b<=k;b=b+1)
 printf(" ");
for(j=1;j<=(i*2)-1;j=j+1)
{
 printf("*");
}
printf("\n");
}
}

