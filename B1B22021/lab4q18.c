#include<stdio.h>
void main(void)
{
int fibonacci(int n);
int a;
printf("Enter how many fibonacci terms you want?");
scanf("%d",&a);
printf("The sum of first %d terms is %d\n",a,fibonacci(a));
}
int fibonacci(int n)
{
int f=1,s=1,t,sum=0;
sum=f+s;
if(n<2)
 {
   printf("%d\n",f);
   return 1;
 }
printf("%d\n%d\n",f,s);
n-=2;
while(n>0)
{
t=f+s;
sum=sum+t;
printf("%d\n",t);
f=s;
s=t;
n--;
}
return sum;
}
