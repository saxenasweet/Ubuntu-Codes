#include<stdio.h>
void main(void)
{
float bs,da,hra,pf,ns;
printf("Enter Basic Salary?");
scanf("%f",&bs);
da=.25*bs;
hra=.15*bs;
pf=.10*(bs+da+hra);
ns=bs+da+hra-pf;
printf("Net Salary is %f\n",ns);
}

