#include<stdio.h>
#include<math.h>
void main(void)
{
float a,b,c,s,area;
printf("Enter three sides of the triangle?");
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area of triangle is %f\n",area);
}

