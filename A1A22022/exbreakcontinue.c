#include<stdio.h>
void main(void)
{
int i;
for(i=1;i<=10;i++)
{
 if(i==3)
  continue;
 printf("%d ",i);
if(i==5)
   break;
}
}

