#include<stdio.h>
void main(void)
{
int fact(int n);
int x;
printf("Enter a number whose factorial you want?");
scanf("%d",&x);
printf("The factorial of %d is %d\n",x,fact(x));
}
int fact(int n)
{
int f=1;
int loop;
for(loop=1;loop<=n;loop++)
 f=f*loop;
return f;
}

