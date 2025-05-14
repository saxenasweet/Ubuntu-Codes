#include<math.h>
#include<stdio.h>
void main(void)
{
float a,b,c,d,r1,r2;
printf("Enter cooefficients of A, B and C?");
scanf("%f %f %f",&a,&b,&c);
d=(b*b)-(a*c*4);
if (d<0)
 printf("Roots are imaginary..\n");
else
 {
  if(d==0)
    {
      printf("Root are equal..\n");
      r1=-b/(a*2);
     }
  else
    {
     printf("Roots are distinct and Real\n");
     r1=(-b+sqrt(d))/(a*2);
     r2=(-b-sqrt(d))/(a*2);
     printf("%f %f\n",r1,r2);
    }
   }
}

