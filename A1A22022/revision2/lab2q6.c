#include<stdio.h>
void main(void)
{
int a,x,b,n;
float y;
scanf("%d %d %d %d",&n,&a,&b,&x);
if(n==1)
 y=a*(x%b);
else if(n==2)
   y=(a*x*x)+(b*b);
else if (n==3)
     y=a-(b*x);
   else
      y=a+((x*1.0))/b);
printf("%f\n",y);
}
