#include<stdio.h>
void main(void)
{
int n[10];
int i,o,t;
for(i=0;i<10;i++)
 scanf("%d",&n[i]);
for(o=0;o<10;o++)
{
for(i=o+1;i<10;i++)
{
if(n[o]>n[i])
{
//Swap
t=n[o];
n[o]=n[i];
n[i]=t;
}
}
}
printf("The sorted arrays is:\n");
for(i=0;i<10;i++)
 printf("%d ",n[i]);
}

