#include<stdio.h>
//Storage Class Specifier is register
//register -> type of memory in CPU
//register->cache->RAM->Hard Disk
//Data will be processed only when it is in registers
//registers have limited size (~KB)
void main(void)
{
int fact(int n);
int num;
int result;
scanf("%d",&num);
result=fact(num);
printf("Factorial of %d is %d\n",num,result);
}
int fact(int n)
{
register int r=1;
int loop;
for(loop=1;loop<=n;loop++)
{
r=r*loop;
}
return r;
}
