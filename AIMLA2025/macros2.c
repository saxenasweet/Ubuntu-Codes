#include<stdio.h>
#define SQUARE(a) a*a
#define CUBE(a) SQUARE(a)*a
void main(void)
{
float a;
scanf("%f",&a);
printf("\nThe square of %f is %f and cube is %f\n",a,SQUARE(a),CUBE(a));
}

