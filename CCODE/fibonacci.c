//Fibonacci Series - 1,1,2,3,5,8,13,21,....
#include<stdio.h>
void main(void)
{
int n;
int f=1,s=1,t;
int loop;
printf("\nEnter how many Fibonacci Numbers you want?");
scanf("%d",&n);
printf("\n%d\n%d",f,s);
n=n-2; //2 numbers have ALREADY been displayed
while(n>0)
{
t=f+s;
printf("\n%d",t);
f=s;
s=t;
n=n-1;
}
}

