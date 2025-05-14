#include<stdio.h>
void main(void)
{
int n;
int i,o;
printf("Enter number of rows?");
scanf("%d",&n);
for(o=n;o>=1;o=o-1)
{
for(i=o;i>=1;i=i-1)
{
printf("%d",i);
}
printf("\n");
}
}
