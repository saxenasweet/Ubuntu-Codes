#include<stdio.h>
void main(void)
{
int a,b,c;
scanf("%d %d",&a,&b);
/*
if(a>b)
 printf("%d is greatest",a);
else
 printf("%d is greatest",b);
*/
c=(a>b)?a:b; //Ternary Operator ?:
printf("\n%d",c);
}

