#include<stdio.h>
#define MIN(x,y) ((x)<(y)?(x):(y))
void main(void)
{
int a,b;
scanf("%d %d",&a,&b);
printf("Minimum of %d and %d is %d\n",a,b,MIN(a,b));
}

