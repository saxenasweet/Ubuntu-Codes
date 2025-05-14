#include<stdio.h>
int a=8; //Global variable
void main(void)
{
void func(void);
int a=3; //Local variable
func();
printf("%d\n",a);
if(a==3)
{
int a=6; //Local variable
printf("%d\n",a);
a++;
}
func();
printf("%d\n",a);
}
void func(void)
{
printf("%d\n",a);
a++;
}
