#include<stdio.h>
void main(void)
{
int i=1;
x:
printf("%d\n",i);
i=i+1;
if(i<11)
 goto x;
}
