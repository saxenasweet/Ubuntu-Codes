#include<stdio.h>
void main(void)
{
printf("Default value of PI is :%f\n",(22.0)/7);
int a,b,q,r,n;
printf("Enter the precision you want?");
scanf("%d",&n);
a=22;
b=7;
q=a/b;//3
r=a%b;//1
printf("%d.",q);
while(n>0)
{
r*=10;//10,30
q=r/7;//1,4
printf("%d",q);
r=r%7;//3,2
n--;
}
}
