#include<stdio.h>
int i=9;
void main(void)
{
int i=1;
void func(void);
if(i==1)
{
int i=7;
i++;
printf("%d\n",i);
}
func(); //Calling the function
printf("Out of if condition i is %d\n",i);
}
void func(void)
{
printf("In func i is %d\n",i);
i++;
}
