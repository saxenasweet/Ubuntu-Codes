#include<stdio.h>
void main(void)
{
int chkprime(int n);
int x,f;
scanf("%d",&x); //x is the numer whose factors you want
f=chkprime(x);
if(f==2)
  printf("Prime\n");
else
 printf("Composite\n");
}
int chkprime(int n)
{
int l,count=0;
for(l=1;l<=n;l++)
{
 if(n%l==0)
  count++;
}
return count;
}
