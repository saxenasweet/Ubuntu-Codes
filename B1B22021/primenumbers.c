#include<stdio.h>
void main(void)
{
int i,j,r,f=0;
for(i=1;i<=100;i=i+1)
{
for(j=1;j<=i;j=j+1)
{
r=i%j;
if(r==0)
 f=f+1;
}
if(f==2)
 printf("%d\n",i);
f=0;
}
}
 
