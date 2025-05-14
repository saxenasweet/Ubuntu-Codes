#include<stdio.h>
void main(void)
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((a>=b)&&(a>=c))
{
 printf("\n%d is greatest\n",a);
}
if((b>=c)&&(b>=a))
{
printf("\n%d is greatest\n",b);
}
if((c>=a)&&(c>=b))
{
printf("\n%d is greatest\n",c);
}
}

