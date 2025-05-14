#include<stdio.h>
void main(void)
{
float bs,da,hra,pf,ts;
printf("Enter Basic Salary?");
scanf("%f",&bs);
da=(bs*.25);
hra=(bs*.15);
ts=bs+da+hra;
pf=ts*.1;
ts=ts-pf;
printf("Total Salary is %f\n",ts);
}

