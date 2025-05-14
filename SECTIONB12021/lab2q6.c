#include<stdio.h>
void main(void)
{
int a,x,b,n;
float y;
printf("Enter the value of n?");
scanf("%d",&n);
printf("Enter values of a , x and b?");
scanf("%d %d %d",&a,&x,&b);
switch(n)
{
case 1:
y=(a*x)%b;
break;
case 2:
y=(a*x*x)+(b*b);
break;
case 3:
y=a-(b*x);
break;
case 4:
y=a+((float)x/b);
}
printf("y=%f\n",y);
}
