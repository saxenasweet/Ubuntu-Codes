#include<stdio.h>
void main(void)
{
int checkevenodd(int n);
int x;
scanf("%d",&x);
if(checkevenodd(x))
 printf("Odd\n");
else
 printf("Even\n");
}

int checkevenodd(int n)
{
if (n%2==0)
 return 0;
else
 return 1;
}
