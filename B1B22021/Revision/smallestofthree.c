#include<stdio.h>
void main(void)
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((a<=b)&&(a<=c))
 printf("smallest is %d\n",a);
else if (b<=c)
  printf("smallest is %d\n",b);
else
  printf("smallest is %d\n",c);
}
