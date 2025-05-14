#include<stdio.h>
void main(void)
{
int a;
for(;;)
{
if(a%2==1)
 printf("%d\n",a);
else
 continue;
if(a==10)
  break;
a++;
}
}
