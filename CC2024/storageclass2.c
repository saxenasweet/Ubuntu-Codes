#include<stdio.h>
void main(void)
{
int i=0;
void func(int x);
func(i);
func(i);
func(i);
}
void func(int x)
{
static int s=0;
x++;
s=s+x;
printf("%d\n",s);
s++;
}
