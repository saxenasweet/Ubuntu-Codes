#include<stdio.h>
//int i=9;
void main(void)
{
//int i=7;
extern int i;
void func(void);
func();
printf("%d",i);
}
void func(void)
{
int i=6;
printf("%d",i);
}
int i=9;
