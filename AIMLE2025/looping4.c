#include<stdio.h>
void main(void)
{
int i=1;
for(;;i++)
{
 if(i%2==0);
 {
//  i++;
  continue;
   } 
 if(i>10)
  break;
 printf("%d\n",i);
// i++;
}
}

