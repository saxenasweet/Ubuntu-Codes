#include<stdio.h>
void main(void)
{
int factorial(int num);
int n;
int sum=0;
int loop;
printf("Enter upto how many terms you want to calculate the sum of series?");
scanf("%d",&n);
for(loop=1;loop<=n;loop++)
{
 sum=sum+factorial(loop);
}
printf("Sum of series is %d\n",sum);
}
int factorial(int num)
{
int a=1;
int f=1;
for(a=1;a<=num;a++)
 f=f*a;
return f;
}
