//User is asked to enter n numbers.  Print only even  numbers
#include<stdio.h>
void main(void)
{
int n;
int iseven;
int loop=1;
int r;
scanf("%d",&n);
for(;;) //for has three parts and all of them are optional
{
scanf("%d",&iseven);
r=iseven%2;
if(r==0)
 printf("\nEven");
loop=loop+1;
if(loop>n)
  break;
}
}

