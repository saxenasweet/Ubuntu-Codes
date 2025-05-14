#include<stdio.h>
void main(void)
{
int i=1;
printf("Size of integer is %d\n",sizeof(i));
while(i>0)
{
i++;
}
printf("Minimum value of int is %d\n",i);
i--;
printf("Maximum value of int is %d\n",i);
}

