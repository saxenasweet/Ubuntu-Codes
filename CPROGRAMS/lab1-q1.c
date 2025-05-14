/*
This is written  by K Saxena
*/
#include<stdio.h>
#include<math.h>
void main(void)
{
//Area of a triangle given three sides a,b and c
float a,b,c,s,area;
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\n%f",area);
}
