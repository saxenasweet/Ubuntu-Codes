#include<stdio.h>
void main(void)
{
float bs,da,hra,pf,ns;
scanf("%f",&bs);
da=bs*0.25;
hra=bs*0.15;
pf=(bs+da+hra)*0.10;
ns=bs+da+hra-pf;
printf("Net Salary is %f\n",ns);
}

