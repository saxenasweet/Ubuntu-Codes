//Fibonacci Numbers - RECURSIVE DEFINITION
//for n>2 , FIBO(n)=FIBO(n-1)+FIBO(n-2)
//for n=1   FIBO(1)=1
//for n=2   FIBO(2)=1
//1,1,2,3,5,8,13,21,....
//FIBO(3)=FIBO(2)+FIBO(1)=1+1=2
//FIBO(5)=FIBO(4)+FIBO(3)=(FIBO(3)+FIBO(2))+(FIBO(2)+FIBO(1))=((FIBO(2)+FIBO(1))+1)+(1+1)=((1+1)+1)+2=5
#include<stdio.h>
void main(void)
{
int fibo(int n);
int d,num;
printf("Which Fibonacci term you want?");
scanf("%d",&num);
d=fibo(num);
printf("The %dth Fibonacci Term is %d\n",num,d);
}
int fibo(int n)
{
if((n==1)||(n==2)) //Limiting condition
  return 1;
else
 return fibo(n-1)+fibo(n-2); //Recursion
}

