#include<stdio.h>
void main(void)
{
int i=1;
do
{
if(i%2==0)
{
 i++;
 continue;
}
printf("%d\n",i);
i++;
}while(i<=10);
printf("I am out of the loop\n");
printf("i is %d\n",i);
}

