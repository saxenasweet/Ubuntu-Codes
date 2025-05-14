//Decimal to Binary
#include<stdio.h>
void main(void)
{
int d,dt,b=0,bt,arr[10],l=0;
printf("Enter a number in decimal?");
scanf("%d",&d);
dt=d;
while(dt>0)
{
arr[l]=(dt%2);
l++;
dt=dt/2;
}
l--;
while(l>=0)
{
printf("%d",arr[l]);
l--;
printf("\n");
}
}
