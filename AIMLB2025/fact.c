#include<stdio.h>
int main(void)
{
int n,f,l;
scanf("%d",&n);
for(l=1,f=1;l<=n;l++)
{
f=f*l;
}
printf("The factorial of %d is %d\n",n,f);
return 0;
}


