#include<stdio.h>
void main(void)
{
int a[5];
int t,i,o,smallest,loc;
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(o=0;o<5;o++)
{
smallest=a[o];
loc=o;
for(i=o+1;i<5;i++)
{
if(smallest>a[i])
{
smallest=a[i];
loc=i;
}
}
t=a[o];
a[o]=smallest;
a[loc]=t;
}
for(i=0;i<5;i++)
printf("%d ",a[i]);
}
