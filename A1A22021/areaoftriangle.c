#include<math.h>
#include<stdio.h>
void main(void)
{
float a,b,c,s,area;
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));//area=pow((s*(s-a)*(s-b)*(s-c)),.5)
printf("Area is %f\n",area);
}
