//Storage Class Specifier - auto
#include<stdio.h>
void main(void)
{
void func(void);
func();
func();
}
void func(void)
{
auto int i=1; //All variables declared are assumed to be of stroage class sepecifier type auto
printf("%d\n",i);
i++;
}
//Storage class specifier type auto is optional
/*
Output:
1
1
*/
