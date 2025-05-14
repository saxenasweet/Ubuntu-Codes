#include<stdio.h>
int i=5;
void main(void)
{
void func(void);
int i=6;
printf("%d\n",i);
i++;
func();
printf("%d\n",i);
func();
}
void func(void)
{
printf("%d\n",i);
i++;
}
