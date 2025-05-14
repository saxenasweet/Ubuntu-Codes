#include<stdio.h>
#include<math.h>
void main(void)
{
int n,x,fact=1,i,j,sign=-1;
float sum=1,d;
scanf("%d %d",&n,&x);
for(i=1;i<=n;i=i+1)
{
for(j=1;j<=i;j=j+1)
{
 fact=fact*j;
}
d=pow(x,i)/fact;
sum=sum+(d*sign);
sign=sign*-1;
fact=1;
}
printf("Sum of Series is %f\n",sum);
}
