#include<stdio.h>
void main(void)
{
int a[]={1,2,3};
int *p;
p=&a[0];
printf("%d\n",*p);
p++; //forwarding a pointer
printf("%d\n",*p);
p++;
printf("%d\n",*p);
p--; //Rewinding a pointer
printf("%d\n",*p);
}
//there are only two arithmetic operations possible with pointers
//namely addition and subtraction
