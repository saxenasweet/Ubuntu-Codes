#include<stdio.h>
void main(void)
{
int i=1;
int n;
int r;
int count=0;
scanf("%d",&n);
c:
r=n%i;
if(r==0)
{
 printf("%d\n",i);
 count=count+1;
}
i=i+1;
if(i<=n)
 goto c;
if(count==2)
 printf("\nNumber is prime");
else
 printf("\nNumber is composite");
}

