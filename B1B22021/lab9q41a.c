#include<stdio.h>
#include<stdlib.h>
void main(void)
{
int n,t;
int *a;
int p,q;
printf("Enter how many numbers you want to enter?");
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int));
for(p=0;p<n;p++)
 scanf("%d",&a[p]);
for(p=0;p<n;p++)
{
for(q=p+1;q<n;q++)
{
if(a[p]>a[q])
{
t=a[p];
a[p]=a[q];
a[q]=t;
}
}
}
printf("The sorted list is :");
for(p=0;p<n;p++)
 printf("%d ",a[p]);
}
