#include<stdio.h>
void main(void)
{
int a[10];
int temp;
int i,o,p;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(o=0;o<10;o++)
{
for(i=0;i<o;i++)
{
if(a[o]<a[i])
{
temp=a[o];
//Shift all elements to the right by one place
for(p=o-1;p>=i;p--)
 a[p+1]=a[p];
a[i]=temp;
}
}
}
for(o=0;o<10;o++)
printf("%d ",a[o]);
}

