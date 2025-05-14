#include<stdio.h>
void main(void)
{
int chkperfect(int number);
int n,flag;
scanf("%d",&n); //Enter number to check for Perfect Square
flag=chkperfect(n);
if(flag==1)
 printf("Perfect Square..\n");
else
 printf("Not a perfect square...\n");
}
int chkperfect(int number)
{
int s,r,t=0;
for(s=1;s<=number;s++)
{
r=s*s;
if(r==number)
{
t=1;
break;
}
}
return t;
}

