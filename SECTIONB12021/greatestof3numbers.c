#include<stdio.h>
void main(void)
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((a>=b)&&(a>=c))
 printf("%d is greatest",a);
else if (b>=c)
   printf("%d is greatst",b);
else 
   printf("%d is greatest",c);
}

