#include<stdio.h>
void main(void)
{
int i=1;
int j;
while(1)
{
j=i+1;
if(j<i)
{
printf("Minimum int value is %d\n",j);
printf("Maximum int value is %d\n",j-1);
break;
}
i++;
}
}
