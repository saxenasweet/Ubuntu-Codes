#include<stdio.h>
#include<math.h>
void main(void)
{
float pi,radius,area,perimeter;
pi=22.0/7; //pi=22/7
scanf("%f",&radius);
perimeter=pi*radius*2;
area=pi*pow(radius,2); //pow-math.h pow(a,b) -a,b are real number
printf("\nArea=%f and Perimeter=%f\n",area,perimeter);
}

