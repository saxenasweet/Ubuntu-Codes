#include<stdio.h>
//#define INPUT 5
void main(void)
{
int a=0;
#ifndef INPUT
a=2;
#else
printf("Enter a?");
scanf("%d",&a);
#endif
printf("Value of a:%d\n",a);
}
