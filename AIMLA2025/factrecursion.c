#include<stdio.h>
void main(void)
{
int f;
int fact(int); //Declaration
scanf("%d",&f);
printf("The factorial of %d is %d\n",f,fact(f));
}
int fact(int x)
{
int g;
if(x==1)
 return 1;
else;
 g=x*fact(x-1);
return g;
}

/*
fact(n)=n*fact(n-1) for n>1
for n=1
fact(1)=1
*/
