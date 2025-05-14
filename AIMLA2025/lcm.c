#include<stdio.h>
void main(void)
{
int a,b,lcm;
scanf("%d %d",&a,&b);
lcm=a;
while(1)
{
if((lcm%a==0)&&(lcm%b==0))
 break;
lcm++;
}
printf("The LCM of %d and %d is %d\n",a,b,lcm);
}

