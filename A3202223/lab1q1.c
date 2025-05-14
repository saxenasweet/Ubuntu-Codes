#include<stdio.h>
#include<math.h>
void main(void)
{
float a,b,c,s,area;
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
area=pow((s*(s-a)*(s-b)*(s-c)),0.5);//area=sqrt(s*(s-a)*(s-b)*(s-c))
printf("%f\n",area);
}

