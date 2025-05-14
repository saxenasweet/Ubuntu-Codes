#include<stdio.h>
void main(void)
{
int i=1;
b:
printf("%d\n",i);
i=i+2;
if(i<=100)
 goto b;
}
