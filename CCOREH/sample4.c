#include<stdio.h>
void main(void)
{
int i;
for(;;)
{
//printf("%d\n",i);
i++;
if(i<0)
break;
}
printf("%d %d\n",i,i--);
}

