#include<stdio.h>
void main(void)
{
//Upto 100 -> Fibonacci Numbers
int f=1,s=1,t;
int n;
printf("\nEnter a number to check if it is a Fibonacci Number?");
scanf("%d",&n);
do //Infinite Loop
{
t=f+s;
if(t==n)
{
 printf("\nFound...");
 break; //come out of the loop
}
if(t>n)
{
 printf("\nNot Found...");
 break;
}
f=s;
s=t;
}while(1);
}
