#include<stdio.h>
void main(void)
{
int i=1;
for(;;)
{
 if(i>10)
  break;
 if(i%2==0)
 {
   i++;
   continue;
 }
 printf("%d\n",i);
 i++;
}
}

