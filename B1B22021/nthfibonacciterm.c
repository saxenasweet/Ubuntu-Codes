//1,1,2,3,5,8,13,21,....
//Fibonacci Series
#include<stdio.h>
void main(void)
{
int n;
int fibo(int no);
printf("Enter which fibonacci term you want?");
scanf("%d",&n);
printf("The %d fibonacci term is %d\n",n,fibo(n));
}
int fibo(int no)
{
if(no==1)
 return 1;
else if (no==2)
         return 1;
else
 return fibo(no-1)+fibo(no-2);
}
/*Recursive Def:
fibo(n)=fibo(n-1)+fibo(n-2) n>2
for n=1 , fibo(1)=1
for n=2 , fibo(2)=1
*/
