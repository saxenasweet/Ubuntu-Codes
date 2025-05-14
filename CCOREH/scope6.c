#include<stdio.h>
void main(void)
{
int fact(int n);
int x;
scanf("%d",&x); //x=4
printf("The factorial of %d is %d\n",x,fact(x));
}
int fact(int n) //n=4
{
register int result=1;
int loop;
for(loop=1;loop<=n;loop++)
 result=result*loop;
return result;
}
