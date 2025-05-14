#include<stdio.h> //Preprocessor Directive
#define PI 3.14
void main(void)
{
float radius;
float area;
scanf("%f",&radius);
area=PI*radius*radius;
printf("Area of a circle is %f\n",area);
}

