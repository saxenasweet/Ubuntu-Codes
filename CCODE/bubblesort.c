#include<stdio.h>
#define N 100
void main(void)
{
int a[N];
int n;
scanf("%d",&n);
int i,o,t;
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
for(o=n-1;o>=0;o--)
{
for(i=0;i<o;i++)
{
if(a[i]>a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
}
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
