#include<stdio.h>
void main(void)
{
int i,m,r,c=0;
for(m=2;m<=100;m=m+1) //Generating numbers between 2 to 100
{
for(i=1;i<=m;i=i+1) //Check if that number is prime or not
{
r=m%i;
if(r==0)
 c=c+1;
}
if(c==2) //If a number has 2 factors then it is prime
 printf("%d ",m);
c=0; //Because we want to check the next number for primality
}
}
