#include<stdio.h>
void main(void)
{
float areaofrectangle(float l,float b); //Function declaration
float x,y;
float result;
printf("Enter the length and breadth of a rectangle whose area you want to calculate?");
scanf("%f %f",&x,&y);
result=areaofrectangle(x,y);
printf("Area of rectangle is %f\n",result);
}
float areaofrectangle(float l,float b)
{
float r;
r=l*b;
return r;
}
