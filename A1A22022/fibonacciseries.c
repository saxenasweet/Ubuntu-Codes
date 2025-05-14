#include<stdio.h>
void main(void)
{
int f=1,s=1,t;
int n;
printf("Enter limit?");
scanf("%d",&n);
printf("%d\n%d\n",f,s);
n=n-2; //Printed first two terms of Fibonacci Series already
while(n>0)
{
t=f+s;
printf("%d\n",t);
f=s;
s=t;
n=n-1; //Reduce one more as one more term has already been printed
}
}

