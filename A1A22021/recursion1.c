//Recursion ->calling a function again and again till a limiting condition is met
/*
fact(n)=n*fact(n-1)
e.g.
fact(5)=5*fact(4)=5*4*fact(3)=5*4*3*fact(2)=5*4*3*2*1

Define a recursive function for Factorial as follows:
fact(n)=n*fact(n-1) n>1
when n=1
fact(1)=1
*/
#include<stdio.h>
void main(void)
{
int fact(int n);
int l;
scanf("%d",&l);
printf("%d",fact(l));
}
int fact(int n)
{
if(n>1)
 return n*fact(n-1);
else
 return 1;
}
