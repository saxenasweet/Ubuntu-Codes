#include<stdio.h>
void main(void)
{
float length,breadth,area,perimeter;
scanf("%f %f",&length,&breadth);
perimeter=(length+breadth)*2;
area=length*breadth;
printf("Perimeter is %f and Area is %f\n",perimeter,area);
}
