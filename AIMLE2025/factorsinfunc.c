#include<stdio.h>
void main(void)
{
int n;
void fact(int n);
scanf("%d",&n);
fact(n);
}
void fact(int n)
{
int l;
for(l=1;l<=n;l++)
 if(n%l==0)
   printf("\n%d",l);
}

