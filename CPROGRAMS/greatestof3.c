#include<stdio.h>
void main(void)
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((a>=b)&&(a>=c))
 printf("\n%d is greatest",a);
else if (b>=c)
  printf("\n%d is greatest",b);
else
 printf("\n%d is greatest",c);
}
