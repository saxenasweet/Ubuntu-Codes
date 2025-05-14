#include<stdio.h>
#include<math.h>
void main(void)
{
float p,r,t,si,ci;
printf("Enter P, R and T?");
scanf("%f %f %f",&p,&r,&t);
si=(p*r*t)/100;
ci=p*pow((1+(r/100)),t);
printf("SI=%f and CI=%f\n",si,ci);
}

