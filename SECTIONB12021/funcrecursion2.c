#include<stdio.h>
void main(void)
{
int func(int n);
int i=1,c;
c=func(1);
}
int func(int n)
{
static int a=0;
a=a+n;
printf("%d\n",a);
if (a>=10)
  return 1;
else
 func(a);
}
/*
Output:
1
2
4
8
16
*/
