1!+2!+3!+4!+....+n!
#include<stdio.h>
void main(void)
{
int i,j,n,f=1,sum=0;
printf("Enter the limit?");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
for(j=1;j<=i;j=j+1)
{
 f=f*j;
}
sum=sum+f;
f=1;
}
printf("Sum of series is %d\n",sum);
}

