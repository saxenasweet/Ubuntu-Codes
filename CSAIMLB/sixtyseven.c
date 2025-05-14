#include<stdio.h>
#define TEMPCON(C) (((C/5)*9)+32)
void main(void)
{
float degc;
scanf("%f",&degc);
printf("Temperature in Degree Fahrehheit is %f",TEMPCON(degc));
}
 
