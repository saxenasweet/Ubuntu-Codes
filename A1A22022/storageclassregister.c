#include<stdio.h>
void main(void)
{
int fact(int n);
int num;
scanf("%d",&num);
printf("Factorial of %d is %d\n",num,fact(num));
}
int fact(int n)
{
register int f=1;
int loop;
for(loop=1;loop<=n;loop++)
 f=f*loop;
return f;
}

