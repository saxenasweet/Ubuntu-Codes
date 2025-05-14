#include<stdio.h>
void main(void)
{
int sumoffibonacciseries(int n);
int num,sum;
printf("Enter up to how many terms you want the sum of fibonacci series?");
scanf("%d",&num);
sum=sumoffibonacciseries(num);
printf("Sum of fibonacci series upto %d is %d\n",num,sum);
}
int sumoffibonacciseries(int n)
{
int f=1,s=1,t;
int count=n-2;
int total=0;
if(n==1)
  return 1;
total=2;
while(count>0)
{
t=f+s;
total=total+t;
f=s;
s=t;
count=count-1;
}
return total;
}
