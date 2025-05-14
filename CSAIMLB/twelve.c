#include<stdio.h>
void main(void)
{
int a,b,c;
int d,e,f;
scanf("%d %d %d",&a,&b,&c);
d=a%2;
e=b%3;
f=c%5;
if((d==0)||(e==0))
 printf("Either of %d or %d is divisible by 2 or 3\n",a,b);
if(!(f))
 printf("Hello\n");
}
