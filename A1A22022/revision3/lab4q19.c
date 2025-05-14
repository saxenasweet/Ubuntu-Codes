#include<stdio.h>
void main(void)
{
int factorial(int n);
int limit;
int sum=0;
int loop;
scanf("%d",&limit);
for(loop=1;loop<=limit;loop++)
{
sum=sum+factorial(loop);
}
printf("Sum=%d\n",sum);
}
int factorial(int n)
{
int f=1;
int loop;
for(loop=1;loop<=n;loop++)
 f=f*loop;
return f;
}
