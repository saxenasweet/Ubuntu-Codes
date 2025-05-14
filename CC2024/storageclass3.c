#include<stdio.h>
void main(void)
{
extern int x;
void func(void);
x++;
printf("%d\n",x);
func();
}
void func(void)
{
extern int x;
x++;
printf("%d\n",x);
}
int x=1;
