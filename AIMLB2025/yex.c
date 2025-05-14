#include<math.h>
#include<stdio.h>
void main(void)
{
float y,x,loop;
for(x=0;x<=4;x=x+.3)
{
y=exp(x);
for(loop=0;loop<=y;loop++)
 printf(" ");
printf("*\n");
}
}

