#include<stdio.h>
void main(void)
{
int i=1;
for(;;) 
{
if(i<0)
 break;
i++;
}
printf("The smallest number :%d and the largest number is %d\n",i,i-1);
}
