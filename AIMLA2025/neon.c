#include<stdio.h>
void main(void)
{
int n;
int sum=0;
int temp;
scanf("%d",&n);
temp=n*n;
while(temp>0)
{
sum+=(temp%10);
temp/=10;
}
if(sum==n)
 printf("Neon Number\n");
else
 printf("Not a Neon Number\n");
}

