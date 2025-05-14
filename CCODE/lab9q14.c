#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int *p;
p=(int *)malloc(32);
for(int i=0;i<8;i++)
{
*p=i;
p++;
}
p--;
printf("%d",*p);
//for(int j=0;j<8;j++)
// printf("%d ",p[j]);
}
