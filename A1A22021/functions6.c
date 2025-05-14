//1,1,2,3,5,8,13,21,...
#include<stdio.h>
void main(void)
{
int sumoffibo(int n);//Function declaration
int num;
printf("Enter how many fibonacci terms you want me to add?");
scanf("%d",&num);
printf("The sum of %d number of Fibonacci Terms is %d\n",num,sumoffibo(num));
}
int sumoffibo(int n)
{
int f=1,s=1,t,sum;
if(n==1)
 return 1;
else if(n==2)
   return f+s;
sum=f+s;
n=n-2;
while(n>0)
{
t=f+s;
sum=sum+t;
f=s;
s=t;
n=n-1;
}
return sum;
}
