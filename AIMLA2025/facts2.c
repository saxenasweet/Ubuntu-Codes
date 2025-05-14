#include<stdio.h>
void main(void)
{
int chkfibo(int n);
int num;
printf("Enter a number you want me to check if it a Fibonacci term?");
scanf("%d",&num);
if(chkfibo(num))
 printf("The number you entered is a Fionacci Term\n");
else
 printf("The number you entered is not a Fibonacci Term\n");
}
int chkfibo(int n)
{
int f1=1,f2=1,t;
while(1)
{
t=f1+f2;
if(t==n)
 return 1;
else if(t>n)
 return 0;
f1=f2;
f2=t;
}
}

