#include<math.h>
#include<stdio.h>
void main(void)
{
float a,b,c,d,r1,r2;
scanf("%f %f %f",&a,&b,&c);
d=(b*b)-(a*c*4);
if (d==0)
{
printf("Roots are equal..\n");
r1=-b/(a*2);
printf("Roots are %f\n",r1);
}
else if(d>0)
{
printf("Roots are distinct..\n");
r1=(-b+sqrt(d))/(a*2);
r2=(-b-sqrt(d))/(a*2);
printf("Roots are %f %f\n",r1,r2);
}
else
printf("Roots are imaginary..\n");
}

