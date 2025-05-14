#include<stdio.h>
void main(void)
{
int n;
int i;
int r;
int count=0;
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
r=n%i;
if(r==0)
 count=count+1;
}
if(count==2)
 printf("\n%d is prime",n);
else
 printf("\n%d is composite",n);
}

//Keywords - void,int,for,if,else
