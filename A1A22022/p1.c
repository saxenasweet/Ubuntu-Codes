#include<stdio.h>
#include<math.h>
void main(void)
{
float num,value;
printf("Enter a number whose square root you want me to calculate?");
scanf("%f",&num);
value=sqrt(num);
printf("Square root is %f\n",value);
value=pow(num,0.5);
printf("Square root is %f\n",value);
}

