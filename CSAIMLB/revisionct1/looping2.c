#include<stdio.h>
void main(void)
{
int i=1;
x:
printf("%d\n",i);
i++;
if(i==11) goto y;
goto x;
y:
printf("I am out of the loop\n");
}
