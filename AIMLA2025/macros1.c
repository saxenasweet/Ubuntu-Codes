#include<stdio.h>
#define PI 22.0/7
#define I int
#define GREATEST(A,B) A>B?A:B
void main(void)
{
I a,b,c;
float radius,area,perimeter;
scanf("%f",&radius);
area=PI*radius*radius;
perimeter=radius*2*PI;
printf("%f %f\n",area,perimeter);
printf("The greatest is %d",GREATEST(5,4));
}

