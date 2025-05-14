/*
Input:1234
Odd Digits are 1 3
Output:4
Odd numbered digits are 4 and 2 if you look at the number from  right to left
*/
#include<stdio.h>
void main(void)
{
int sumofodddigits(int n); //Function Declaration
int x;
printf("Enter a number?");
scanf("%d",&x);
printf("\nThe sum of odd digits are %d\n",sumofodddigits(x));
}
int sumofodddigits(int n)
{
int sum=0;
int d,r;
while(n>0)
{
d=n%10; // right most digit of the number
r=d%2;
if(r==1)
 sum=sum+d;
n=n/10; //reduce the number by removing the right most digit
}
return sum;
}
