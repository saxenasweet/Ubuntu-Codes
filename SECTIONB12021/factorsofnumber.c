#include<stdio.h>
void main(void)
{
int n;
int i;
int r;
scanf("%d",&n);
printf("\nFactors of %d are -\n",n);
for(i=1;i<=n;i=i+1)
{
r=n%i;
if(r==0)
 printf("%d\n",i);
}
}
//Keywords - void,int,for,if
