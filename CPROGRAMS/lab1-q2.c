#include<stdio.h>
void main(void)
{
float bs,da,hra,pf,ns;
scanf("%f",&bs);
da=bs*.25;
hra=bs*.15;
pf=(bs+da+hra)*.10;
ns=bs+da+hra-pf;
printf("%f",ns);
}
