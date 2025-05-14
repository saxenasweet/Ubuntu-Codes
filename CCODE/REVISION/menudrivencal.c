#include<stdio.h>
void main(void)
{
int n;
scanf("%d",&n);
switch(n)
{
case 0:
printf("ZERO");
break;
case 1:
printf("ONE");
break;
case 2:
printf("TWO");
break;
case 3:
printf("THREE");
break;
default:
printf("SOME OTHER VALUE");
}
printf("\n");
}

