//Write a code to convert temperature in deg centigrade to
//degree fahrenheight
#include<stdio.h>
void main(void)
{
float degc,degf;
printf("Enter the temperature in Degree Centigrade?");
scanf("%f",&degc);
degf=((degc/5)*9)+32;
printf("The converted temperature is %f\n",degf);
}

