#include<stdio.h>
void main(void)
{
int sumofdigits(int n);
int num;
scanf("%d",&num);
printf("%d\n",sumofdigits(num));
}
int sumofdigits(int n)
{
int d=0;
if(n>0)
 d=(n%10)+sumofdigits(n/10); //Calling the function again and again till n becomes 0
else
 return d; //When n becomes 0 return the value of d
}
