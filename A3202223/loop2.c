#include<stdio.h>
void main(void)
{
int i=1,sum=0;
while(i<=10)
{
printf("%d\n",i);
sum=sum+i;
i=i+1;
}
printf("Sum=%d\n",sum);
}
