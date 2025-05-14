#include<stdio.h> //Header Files - Standard C Libraries
#include<math.h> 
void main(void)
{
float si,p,r,t,ci;
scanf("%f %f %f",&p,&r,&t);
si=(p*r*t)/100;
ci=p*pow((1+(r/100)),t);
printf("\nSI=%f and CI=%f\n",si,ci);
}

