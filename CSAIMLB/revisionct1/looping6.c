#include<stdio.h>
void main(void)
{
int a=1;
for(;;)
{
printf("%d\n",a);
a++;
if(a==11)
 break;
}
printf("Out of the loop\n");
}
