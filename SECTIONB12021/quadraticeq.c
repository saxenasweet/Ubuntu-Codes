//Roots of a quadratic equation  
#include<stdio.h>
#include<math.h>
void main(void)
{
float a,b,c;
float d,r1,r2;
scanf("%f %f %f",&a,&b,&c);
d=(b*b)-(a*c*4);
if(d<0)
 printf("Roots are imaginary\n");
else if(d==0)
{
 printf("Roots are equal.");
 r1=-b/(a*2);
 printf(" :%f\n",r1);
}
else
{
r1=(-b+sqrt(d))/(a*2);
r2=(-b-sqrt(a))/(a*2);
printf("Roots are real and distinct : %f %f\n",r1,r2);
}
}
