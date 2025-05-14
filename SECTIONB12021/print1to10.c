//An example of looping - Repitition of statements till a limiting condition is met
#include<stdio.h>
void main(void)
{
int i=1;
a: //Label
printf("%d\n",i);
i=i+1;
if(i<=10) //till i is less than or equal to 10
 goto a;

}
