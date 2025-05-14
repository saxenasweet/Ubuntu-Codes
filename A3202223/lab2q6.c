#include<stdio.h>
void main(void)
{
int n,a,x,b;
float y;
scanf("%d",&n);
scanf("%d %d %d",&a,&x,&b);
if(n==1)
 y=(a*x)%b;
else if (n==2)
 y=(a*x*x)+(b*b);
else if (n==3)
 y=a-(b*x);
else
 y=a+((x*1.0)/b);
printf("Result is %f\n",y);
}

