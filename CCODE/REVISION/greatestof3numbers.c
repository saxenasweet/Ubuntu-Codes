#include<stdio.h>
void main(void)
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((a>=b)&&(a>=c)) //Nested if else
{
 printf("\n%d is greatest\n",a);
}
else if(b>=c)
{
printf("\n%d is greatest\n",b);
}
else
{
printf("\n%d is greatest\n",c);
}
}

