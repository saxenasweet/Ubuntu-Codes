#include<stdio.h>
void main(void)
{
int i,n,r;
printf("Enter a number whose factors you want me to print?");
scanf("%d",&n);
printf("Factors are\n");
for(i=1;i<=n;i=i+1)
{
r=n%i;
if(r==0)
 printf("%d\n",i);
}
}

