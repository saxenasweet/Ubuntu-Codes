#include<stdio.h>
#include<math.h>
void main(void)
{
float x,y,spaces;
for(x=0;x<4;x=x+0.25)
{
y=exp(x);
for(spaces=0;spaces<y;spaces++)
 printf(" ");
printf("*");
printf("\n");
}
}

