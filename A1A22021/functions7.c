#include<stdio.h>
void main(void)
{
int sumoffact(int n);
int limit;
printf("Enter the value of last term?");
scanf("%d",&limit);
printf("The sum of factorial series is %d\n",sumoffact(limit));
}
int sumoffact(int n)
{
int sum=0;
int loop,fact,result=1;
for(loop=1;loop<=n;loop++)
{
for(fact=1;fact<=loop;fact++)
{
 result=result*fact;
}
sum=sum+result;
result=1;
}
return sum;
}
