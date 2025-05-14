#include<stdio.h>
void main(void)
{
int i,sum=0,r,j;
printf("Enter a number you want me to check if it is Armstrong?");
scanf("%d",&i);
j=i;
while(j>0)
{
r=j%10; //r has the right most digit
sum=sum+(r*r*r);
j=j/10; //remove the right most digit
}
if(sum==i)
 printf("Number is Armstong");
else 
 printf("Number is not an Armstrong");
}


