#include<stdio.h>
int main(void)
{
int fact(int);
int a;
scanf("%d",&a);
printf("The factorial of %d is %d\n",a,fact(a));
}
int fact(int f)
{
int g;
if(f==1)
 return 1;
else
 g=f*fact(f-1);
return g;
}

