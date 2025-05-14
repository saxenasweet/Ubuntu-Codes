#include<stdio.h>
void main(void)
{
int fact(int n);
int num;
printf("Enter a number?");
scanf("%d",&num);
printf("The factorial of %d is %d\n",num,fact(num));
}
int fact(int n)
{
if(n>0)
 return n*fact(n-1);
else
 return 1;
}

