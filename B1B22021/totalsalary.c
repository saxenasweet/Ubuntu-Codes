#include<stdio.h>
void main(void)
{
float bs,da,hra,pf,ts;
printf("Enter your basic salary?");
scanf("%f",&bs);
da=bs*0.25;
hra=bs*0.15;
pf=(bs+da+hra)*0.10;
ts=bs+da+hra-pf;
printf("Total take away home salary is %f\n",ts);
}

