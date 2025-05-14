#include<stdio.h>
#include<math.h>
void main(void)
{
float a,b,c,r1,r2,d;
scanf("%f %f %f",&a,&b,&c);
d=(b*b)-(a*c*4);
if(d<0)
 printf("Roots are imaginary..\n");
else if(d==0)
{
 printf("Roots are Equal..\n");
 r1=-b/(a*2);
 printf("Root is %f\n",r1);
}
else
{
printf("Roots are distinct..\n");
r1=(-b+sqrt(d))/(a*2);
r2=(-b-sqrt(d))/(a*2);
printf("Roots are %f and %f\n",r1,r2);
}
}

