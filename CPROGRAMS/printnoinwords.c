#include<stdio.h>
void main(void)
{
int i,r,n,t,s=0;
scanf("%d",&t); 
while(t>0)
{
s=(s*10)+(t%10); 
t=t/10; 
}
n=s;
printf("\nThe number in words is :");
while(n>0)
{
r=n%10; 
switch(r)
{
case 1:
 printf("One ");
 break;
case 2:
 printf("Two ");
 break;
case 3:
 printf("Three ");
 break;
case 4:
 printf("Four");
 break;
case 5:
 printf("Five");
 break;
case 6:
 printf("Six");
 break;
case 7:
 printf("Seven");
 break;
case 8:
 printf("Eight");
 break;
case 9:
 printf("Nine");
 break;
default:
 printf("Zero");
}
n=n/10; 
}
}
