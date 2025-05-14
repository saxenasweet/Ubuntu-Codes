#include<stdio.h>
void main(void)
{
//Armstrong Number Check
int n,r,s=0,m;
scanf("%d",&m);
n=m;
while(n>0)
{
r=n%10; 
s=s+(r*r*r); 
n=n/10; 
}
if(s==m)
 printf("\nArmstrong Number");
else
 printf("\nNot an Armstrong Number");
}
