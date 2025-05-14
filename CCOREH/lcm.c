#include<stdio.h>
void main(void)
{
int a,b;
int i;
scanf("%d %d",&a,&b);
if(a>b)
 i=a;
else 
 i=b;
while(1)
{
if((i%a==0)&&(i%b==0))
 break;
i++;
}
printf("LCM of two numbers %d and %d is %d\n",a,b,i);
}
