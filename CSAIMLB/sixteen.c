#include<stdio.h>
void main(void)
{
int num,f=1;
scanf("%d",&num);
while(f<=num)
{
if((num%f)==0)
 printf("%d\n",f);
f++;
}
printf("\n");
}

