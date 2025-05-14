#include<stdio.h>
void main(void)
{
float areaofrect(float x,float y); 
float a,b;
printf("Enter 2 sides of a rectangle");
scanf("%f %f",&a,&b);
printf("The Area of Rectangle is %f\n",areaofrect(a,b));
}
float areaofrect(float x, float y)
{
return x*y;
}

