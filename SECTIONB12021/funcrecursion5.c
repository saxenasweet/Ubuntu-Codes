/*
Sum of first n natural numbers
n+(n-1)+(n-2)+....+3+2+1
Recursive Formula
sum(n)=n+sum(n-1) n>1
sum(1)=1          n=1 Limiting condition
sum(5)=5+sum(4)=5+4+sum(3)=5+4+3+sum(2)=5+4+3+2+sum(1)=5+4+3+2+1
*/
//Write a code to calculate sum of first n natural numbers using RECURSION

#include<stdio.h>
void main(void)
{
int n;
int sum;
int sumupton(int num);
printf("Enter upto what natural number you want the sum?");
scanf("%d",&n);
sum=sumupton(n);
printf("The sum of first %d natural number is %d\n",n,sum);
}
int sumupton(int num)
{
if (num==1)
 return 1;
else
  return num+sumupton(num-1);
}

