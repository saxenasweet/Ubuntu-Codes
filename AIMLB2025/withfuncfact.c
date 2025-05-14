#include<stdio.h>
void main(void)
{
void fact(int n);
int x;
scanf("%d",&x); //x is the numer whose factors you want
fact(x);
}
void fact(int n)
{
int l;
for(l=1;l<=n;l++)
{
 if(n%l==0)
  printf("%d\n",l);
}
}
