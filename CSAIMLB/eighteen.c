#include<stdio.h>
void main(void)
{
int a,b,g,r1,r2;
scanf("%d %d",&a,&b);
if(a>b)
 g=a;
else
 g=b;
while(1)
{
r1=g%a;
r2=g%b;
if((r1==0)&&(r2==0))
 {
  printf("LCM of %d and %d is %d\n",a,b,g);
  break;
 }
g++;
}
}

