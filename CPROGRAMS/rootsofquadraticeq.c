#include<math.h>
#include<stdio.h>
void main(void)
{
float a,b,c,r1,r2;
float d;
scanf("%f %f %f",&a,&b,&c);
d=((b*b)-(a*c*4));
if(d<0)
{
 printf("\nRoots are imaginary");
}
else
{
r1=(-b+pow(d,.5))/(a*2);
r2=(-b-pow(d,.5))/(a*2);
printf("\nRoots are %f and %f\n",r1,r2);
}
}


