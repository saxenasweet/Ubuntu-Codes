#include<stdio.h>
//int i=1; // i is a Global variable i.e. the scope of i is the whole program
void main(void)
{
extern int i;
void func(void);
printf("In main i is %d\n",i);
i++; //i=2
func();
printf("In main i is %d\n",i);
}
void func(void)
{
extern int i;
printf("In func i is %d\n",i);
i++; //i=3
}
int i=1;
/*
Output:
In main i is 1
In func i is 2
In main i is 3
*/
