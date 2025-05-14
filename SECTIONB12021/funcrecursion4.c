/*
n!=n*(n-1)*(n-2)*(n-3)*...*2*1
4!=4*3*2*1
RECURSIVE DEFINITION OF FACTORIAL
fact(n)=n*fact(n-1) for n>1
fact(1)=1           for n=1

fact(3)=3*fact(2)=3*2*fact(1)=3*2*1=6
*/
#include<stdio.h>
void main(void)
{
int fact(int num);
int result,n;
printf("Enter a number whose factorial you want?");
scanf("%d",&n);
result=fact(n);
printf("The factorial of %d is %d\n",n,result);
}
int fact(int num)
{
if(num==1)
 return 1;
else
 return num * fact(num-1);
}

