#include<stdio.h>
int main(void)
{
int i=1,j=0,k;
k=(i<<j)+(j<<i)+(i<<i)+(j<<j);
k>>=i;
printf("%d",k);
return 0;
}
