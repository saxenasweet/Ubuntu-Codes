#include<stdio.h>
int i=9; //global variable
void main(void)
{
int i=5; //Local variable
void func(void);
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
