//Write a code to calculate cosine of any angle without using any math function
#include<math.h>
#include<stdio.h>
void main(void)
{
float cos=1,fact,t,sign=-1,value,a1,a2,valuefact=1;//value is in radians
int n;
scanf("%f",&value);
scanf("%d",&n);
for(t=2;t<=n;t=t+2)
{
a1=pow(value,t);
for(fact=1;fact<=t;fact=fact+1)
{
valuefact=valuefact*fact;
}
a2=a1/valuefact;
valuefact=1;
cos=cos+(sign)*a2;
sign=sign*(-1);
}
printf("\nValue is %f\n",cos);
}


