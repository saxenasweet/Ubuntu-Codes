#include<stdio.h>
#define PI
void main(void)
{
int a=2;
#ifndef PI
printf("%d\n",a);
#else
a=a+2;
printf("%d\n",a);
#endif
}
//4 will get printed
