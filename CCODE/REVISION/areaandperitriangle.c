#include<stdio.h>
#include<math.h>
void main(void)
{
float a,b,c,area,perimeter,s;
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
perimeter=s*2;
printf("\nArea=%f and Perimeter=%f\n",area,perimeter);
}

